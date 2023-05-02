#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/file.h>

char a[99], e, f[30], ch, a1[99], cmd[100], str1[200], str2[200], q[100];
char *r;
FILE *f1;
int i, j, ls, lw, temp, chk = 0, doIncrement, isSpace;
int b, c, d, x, k, l, z, n;
int myCounterFd;
double y;
char m[] = "\n\n\t\t\33[1;91m@@@  @@@  @@@     @@@@@@@@     @@@           @@@@@@@      @@@@@@        @@@@@@@@@@      @@@@@@@@\n\t\t@@@  @@@  @@@     @@@@@@@@     @@@          @@@@@@@@     @@@@@@@@       @@@@@@@@@@@     @@@@@@@@\n\t\t@@!  @@!  @@!     @@!          @@!          !@@          @@!  @@@       @@! @@! @@!     @@!     \n\t\t!@!  !@!  !@!     !@!          !@!          !@!          !@!  @!@       !@! !@! !@!     !@!     \n\t\t@!!  !!@  @!@     @!!!:!       @!!          !@!          @!@  !@!       @!! !!@ @!@     @!!!:!  \33[0m\n\t\t\33[1;93m!@!  !!!  !@!     !!!!!:       !!!          !!!          !@!  !!!       !@!   ! !@!     !!!!!:  \n\t\t!!:  !!:  !!:     !!:          !!:          :!!          !!:  !!!       !!:     !!:     !!:     \33[0m\n\t\t\33[1;90m:!:  :!:  :!:     :!:           :!:         :!:          :!:  !:!       :!:     :!:     :!:     \n\t\t :::: :: :::       :: ::::      :: ::::      ::: :::     ::::: ::       :::     ::       :: ::::\n\t\t  :: :  : :       : :: ::      : :: : :      :: :: :      : :  :        :      :       : :: ::  \n\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t";
int main()
{
    for (c = 1; c >= 1; c++)
    {
        printf("\33c\e[3J");

        if ((myCounterFd = open("/tmp/myappname.counter", O_CREAT | O_RDWR, 0666)) < 0)
        {
            return -1;
        }
        if (flock(myCounterFd, LOCK_EX | LOCK_NB) < 0)
        {
            return -1;
        }
        FILE *fp = fdopen(myCounterFd, "w+");
        int count;
        size_t error;
        error = fread(&count, sizeof(count), 1, fp);

        if (error < 1)
        {
            count = 1;
            fwrite(&count, sizeof(count), 1, fp);
        }
        else
        {
            count++;
            rewind(fp);
            fwrite(&count, sizeof(count), 1, fp);
        }
        fflush(fp);

        flock(myCounterFd, LOCK_UN);
        close(myCounterFd);
        if (count == 1)
        {

            printf("\n\n\t\t\t💬⭐️💬 \33[0;91mTOOLS NEED TO BE INSTALLED 💬⭐️💬\33[0m\n\n");

            system("read -n 1 -s -p \"\n\n\33[1;94mPress any key to Start Installation\33[1;96m...... \33[0m👉👉👉 \"");

            system("say Installing packages");

            printf("\n\n\n\t\t\t\33[1;92mInstalling packages 📦 ⬇️ 📦 ⬇️ 📦 \n\n");

            system("say Installation In progress");

            printf("\n\t\t\t\33[0;93mInstallation In progress\33[0;90m......\33[0m\n\n\n");

            printf("\n\n");

            system("xcode-select --install");

            system("git clone https://github.com/jarun/googler.git");

            system("git clone https://github.com/Homebrew/brew homebrew");

            system("brew install jq mpv youtube-dl fzf");

            system("git clone https://github.com/pystardust/ytfzf");

            system("brew install mutt");

            system("sudo chgrp mail /opt/homebrew/opt/mutt/bin/mutt_dotlock");

            system("sudo chmod g+s /opt/homebrew/opt/mutt/bin/mutt_dotlock");

            system("brew install ncspot");

            system("brew install telnet");

            system("brew install blueutil");

            system("say Enter your mail details for further usage");

            printf("\n\n💬⭐️💬 \33[0;95mEnter your mail details for further usage 💬⭐️💬\33[0m\n\n");

            system("nano ~/.muttrc");

            printf("\n\n\n✅ ✅ Installation completed ✅ ✅\n\n\n");

            system("say Installation completed");
        }
        else if (count >= 1)
        {
            printf("\n\n\33[4;91mDisclaimer\33[0m : \33[1;32mBot will call you with the below Entered Name");
            printf("\n\n\33[0;95mEnter your Name : \33[0;33m");
            scanf("%[^\n]%*c", f);
            for (b = 0; f[b] != 0; b++)
            {
                if (f[b] >= 'a' && f[b] <= 'z')
                {
                    f[b] = f[b] - 32;
                }
            }
            f1 = fopen("Name.txt", "w");
            fprintf(f1, "%s", f);
            fclose(f1);

            system("read -n 1 -s -p \"\n\n\33[1;94mPress any key to Start the bot\33[1;96m...... \33[0m👉👉👉 \"");

            printf("\n\n");
            for (k = 1; m[k] > 0; k++)
            {
                printf("%c", m[k]);
                for (l = 0; l <= 888888; l++)
                {
                }
            }
            system("say Welcome;say -f Name.txt");
            for (c = 1; c >= 1; c++)
            {
                strcpy(str1, "googler -j ");
                strcpy(str2, "ytfzf ");
                scanf("%[^\n]%*c", a);
                for (b = 0; a[b] != 0; b++)
                {
                    if (a[b] >= 'a' && a[b] <= 'z')
                    {
                        a[b] = a[b] - 32;
                    }
                }

                if ((strcmp(a, "HI") == 0) || (strcmp(a, "HELLO") == 0) || (strcmp(a, "SALAAM") == 0) || (strcmp(a, "HEY") == 0) || (strcmp(a, "HOLA") == 0) || (strcmp(a, "NAMASTHE") == 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mHi %s\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("say hi ;say -f Name.txt;say Iam scenorita");
                }
                else if (strnstr(a, "NAME", 1000) > 0)
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mDid I forget to introduce myself? I’m your Senorita a Chat Bot. \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say Did I forget to introduce myself? I’m your scenorita , a Chat Bot.");
                }
                else if ((strnstr(a, "SLEEP", 1000) > 0) || (strnstr(a, "REST", 1000) > 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mI take power naps when we aren't talking 😴.\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say I take power naps when we arent talking.");
                }
                else if ((strcmp(a, "BYE") == 0) || (strcmp(a, "GOOD BYE") == 0) || (strcmp(a, "BYE BYE") == 0) || (strcmp(a, "SEE YOU") == 0) || (strcmp(a, "CATCH YOU LATER") == 0) || (strcmp(a, "IM OFF") == 0) || (strcmp(a, "TAKE CARE") == 0) || (strcmp(a, "GOOD NIGHT") == 0) || (strcmp(a, "IAM DONE") == 0) || (strcmp(a, "WE ARE DONE") == 0))
                {
                    system("say bye ,Have a nice day;say -f Name.txt");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \33[0;36m\tBye %s , Please give your valuable feedback, So that we can improve.\33[0m\n\n", f);

                    system("say please give your valuable feedback , So that we can improve.");

                    system("open https://docs.google.com/forms/d/e/1FAIpQLScCYvZ04bZ9I_4vUF16KpN_XOwWDy-E3N6_20KOIemXbMe5ow/viewform?usp=sf_link");
                    exit(0);
                }

                else if ((strcmp(a, "WHEN IS YOUR BIRTH DAY") == 0) || (strcmp(a, "DOB") == 0) || (strcmp(a, "WHEN YOU HAVE BEEN CREATED") == 0) || (strcmp(a, "WHEN YOU WERE MADE") == 0) || (strcmp(a, "WHAT IS YOUR NAME DATE") == 0) || (strcmp(a, "WHAT IS YOUR DATE OF BIRTH") == 0) || (strnstr(a, "BIRTH", 1000) > 0) || (strnstr(a, "BORN", 1000) > 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m30-10-2021\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say -f Name.txt;say Its 30th OCTOBER TWENTY TWENTY ONE");
                }
                else if ((strcmp(a, "WHO BUILT YOU") == 0) || (strcmp(a, "WHO MADE YOU") == 0) || (strcmp(a, "WHO DESIGNED YOU") == 0) || (strcmp(a, "WHO CREATED YOU") == 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m-------> \t\33[0;36mAjay,Akshaya,Teja\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say Ajay, Akshaya and  Teja, built me");
                }
                else if (strnstr(a, "MY FRIEND", 1000) > 0)
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m-------> \t\33[0;36mYes.I’m your friend till the end. And not in a ‘job obligation’ way. In a ‘you’re awesome!’ kind of way.\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say Yes.I’m your friend till the end. And not in a ‘job obligation’ way. In a ‘you’re awesome!’ kind of way.");
                }

                else if ((strcmp(a, "OPEN ZOOM") == 0) || (strcmp(a, "ZOOM KHOLO") == 0) || (strcmp(a, "ACCESS ZOOM") == 0) || (strcmp(a, "START ZOOM") == 0) || (strcmp(a, "GO TO ZOOM") == 0) || (strcmp(a, "LAUNCH ZOOM") == 0) || (strcmp(a, "INITIATE ZOOM") == 0) || (strcmp(a, "ENTER ZOOM") == 0) || (strcmp(a, "TRIGGER ZOOM") == 0) || (strcmp(a, "OPEN ZOOM APP") == 0))
                {
                    system("say ok;say -f Name.txt;say opening zoom");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Zoom \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("open -a zoom.us");
                }
                else if ((strcmp(a, "CLOSE ZOOM") == 0) || (strcmp(a, "ZOOM BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN ZOOM") == 0) || (strcmp(a, "CLOSE ZOOM APP") == 0) || (strcmp(a, "QUIT ZOOM") == 0) || (strcmp(a, "EXIT ZOOM") == 0) || (strcmp(a, "LEAVE ZOOM") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing zoom");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Zoom\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("pkill zoom.us");
                }

                else if ((strnstr(a, "ZOOM", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access zoom");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Zoom\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open zoom\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Zoom");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Zoom\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say opening zoom");

                                system("open -a zoom.us");
                            }
                            else if (ch == 27)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Zoom\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing zoom");

                                system("pkill zoom.us");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if ((strcmp(a, "OPEN SPOTIFY") == 0) || (strcmp(a, "SPOTIFY KHOLO") == 0) || (strcmp(a, "ACCESS SPOTIFY") == 0) || (strcmp(a, "START SPOTIFY") == 0) || (strcmp(a, "GO TO SPOTIFY") == 0) || (strcmp(a, "LAUNCH SPOTIFY") == 0) || (strcmp(a, "INITIATE SPOTIFY") == 0) || (strcmp(a, "ENTER SPOTIFY") == 0) || (strcmp(a, "TRIGGER SPOTIFY") == 0) || (strcmp(a, "OPEN SPOTIFY APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Spotify");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Spotify \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a spotify ");
                }

                else if ((strcmp(a, "CLOSE SPOTIFY") == 0) || (strcmp(a, "SPOTIFY BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN SPOTIFY") == 0) || (strcmp(a, "CLOSE ZOOM SPOTIFY") == 0) || (strcmp(a, "QUIT SPOTIFY") == 0) || (strcmp(a, "EXIT SPOTIFY") == 0) || (strcmp(a, "LEAVE SPOTIFY") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Spotify");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Spotify \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("pkill Spotify");
                }
                else if ((strnstr(a, "SPOTIFY", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Spotify");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Spotify\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Spotify\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Spotify");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Spotify\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Spotify");

                                system("open -a spotify");
                            }
                            else if (ch == 27)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Spotify\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Spotify");

                                system("pkill spotify");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if ((strcmp(a, "OPEN GOOGLE") == 0) || (strcmp(a, "GOOGLE KHOLO") == 0) || (strcmp(a, "ACCESS GOOGLE") == 0) || (strcmp(a, "START GOOGLE") == 0) || (strcmp(a, "GO TO GOOGLE") == 0) || (strcmp(a, "LAUNCH GOOGLE") == 0) || (strcmp(a, "INITIATE GOOGLE") == 0) || (strcmp(a, "ENTER GOOGLE") == 0) || (strcmp(a, "TRIGGER GOOGLE") == 0) || (strcmp(a, "OPEN GOOGLE APP") == 0) || (strcmp(a, "OPEN CHROME") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Google");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Google \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a 'Google Chrome'");
                }
                else if ((strcmp(a, "CLOSE GOOGLE") == 0) || (strcmp(a, "GOOGLE BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN GOOGLE") == 0) || (strcmp(a, "CLOSE GOOGLE APP") == 0) || (strcmp(a, "QUIT GOOGLE") == 0) || (strcmp(a, "EXIT GOOGLE") == 0) || (strcmp(a, "LEAVE GOOGLE") == 0) || (strcmp(a, "CLOSE CHROME") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Google");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Google \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill 'Google Chrome'");
                }

                else if ((strnstr(a, "GOOGLE", 1000) > 0) || (strnstr(a, "CHROME", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Google");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Google\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Google\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Google");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Google\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Google");

                                system("open -a 'Google Chrome'");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Google\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Google");

                                system("pkill 'Google Chrome'");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if ((strcmp(a, "OPEN SAFARI") == 0) || (strcmp(a, "SAFARI KHOLO") == 0) || (strcmp(a, "ACCESS SAFARI") == 0) || (strcmp(a, "START SAFARI") == 0) || (strcmp(a, "GO TO SAFARI") == 0) || (strcmp(a, "LAUNCH SAFARI") == 0) || (strcmp(a, "INITIATE SAFARI") == 0) || (strcmp(a, "ENTER SAFARI") == 0) || (strcmp(a, "TRIGGER SAFARI") == 0) || (strcmp(a, "OPEN SAFARI APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Safari");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Safari\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Safari");
                }
                else if ((strcmp(a, "CLOSE SAFARI") == 0) || (strcmp(a, "SAFARI BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN SAFARI") == 0) || (strcmp(a, "CLOSE SAFARI APP") == 0) || (strcmp(a, "QUIT SAFARI") == 0) || (strcmp(a, "EXIT SAFARI") == 0) || (strcmp(a, "LEAVE SAFARI") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Safari");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Safari \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Safari");
                }
                else if ((strnstr(a, "SAFARI", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Safari");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Safari\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Safari\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Safari");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Safari\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Safari");

                                system("open -a Safari");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Safari\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say Closing Safari;say -f Name.txt");

                                system("pkill Safari");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "SEARCH") == 0) || (strcmp(a, "QUEST") == 0) || (strcmp(a, "MAKE A SEARCH") == 0) || (strcmp(a, "EXPLORE") == 0) || (strcmp(a, "HUNT") == 0) || (strcmp(a, "SCOUT") == 0))
                {

                    system("say -f Name.txt;say What do you want to search ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s ,What do you want to search ?\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("googler");
                }

                else if ((strnstr(a, "SEARCH", 1000) > 0))
                {

                    strcpy(q, "SEARCH");
                    r = strstr(a, "SEARCH");
                    ls = strlen(r);
                    lw = strlen(q);
                    for (i = 0; i < ls; i++)
                    {
                        temp = i;
                        doIncrement = 0;
                        for (j = 0; j < lw; j++)
                        {
                            if (r[i] == q[j])
                            {
                                if (temp > 0 && (temp + lw) < ls)
                                {
                                    if (r[temp - 1] == ' ' && r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp == 0 && (temp + lw) < ls)
                                {
                                    if (r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp > 0 && (temp + lw) == ls)
                                {
                                    if (r[temp - 1] == ' ')
                                        doIncrement = 1;
                                }
                                if (doIncrement == 1)
                                    i++;
                                else
                                    break;
                            }
                        }
                        chk = i - temp;
                        if (chk == lw)
                        {
                            i = temp;
                            for (j = i; j < (ls - lw); j++)
                                r[j] = r[j + lw];
                            ls = ls - lw;
                            i = temp;
                            r[j] = '\0';
                        }
                    }
                    ls = strlen(r);
                    i = 0;
                    while (r[i] != '\0')
                    {
                        isSpace = 0;
                        if (r[i] == ' ' && r[i + 1] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (i == 0 && r[i] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (isSpace == 0)
                            i++;
                        else
                        {
                            r[j] = '\0';
                            ls--;
                        }
                    }

                    strcat(str1, r);
                    strcpy(cmd, str1);
                    f1 = fopen("Search.txt", "w");
                    fprintf(f1, "SEARCHING FOR %s", r);
                    fclose(f1);

                    system("say -f Search.txt");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mSearching for %s\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", r);

                    system(cmd);
                }

                else if ((strcmp(a, "OPEN WHATSAPP") == 0) || (strcmp(a, "WHATSAPP KHOLO") == 0) || (strcmp(a, "ACCESS WHATSAPP") == 0) || (strcmp(a, "START WHATSAPP") == 0) || (strcmp(a, "GO TO WHATSAPP") == 0) || (strcmp(a, "LAUNCH WHATSAPP") == 0) || (strcmp(a, "INITIATE WHATSAPP") == 0) || (strcmp(a, "ENTER WHATSAPP") == 0) || (strcmp(a, "TRIGGER WHATSAPP") == 0) || (strcmp(a, "OPEN WHATSAPP APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Whatsapp");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Whatsapp \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a WhatsApp");
                }

                else if ((strcmp(a, "CLOSE WHATSAPP") == 0) || (strcmp(a, "WHATSAPP BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN WHATSAPP") == 0) || (strcmp(a, "CLOSE WHATSAPP APP") == 0) || (strcmp(a, "QUIT WHATSAPP") == 0) || (strcmp(a, "EXIT WHATSAPP") == 0) || (strcmp(a, "LEAVE WHATSAPP") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Whatsapp ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Whatsapp \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill WhatsApp");
                }

                else if ((strnstr(a, "WHATSAPP", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access WhatsApp");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Do you mean - You want to access WhatsApp\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Whatsapp\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Whatsapp");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Whatsapp\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Whatsapp");

                                system("open -a WhatsApp");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Whatsapp\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Whatsapp");

                                system("pkill WhatsApp");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "PLAY MUSIC") == 0) || (strcmp(a, "PLAY SONGS") == 0) || (strcmp(a, "MUSIC") == 0) || (strcmp(a, "OPEN MUSIC PLAYER") == 0) || (strcmp(a, "PLAY SONG") == 0))
                {
                    system("say ok;say -f Name.txt;say Playing music ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Playing Music \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("ncspot");
                }
                else if ((strnstr(a, "MUSIC", 1000) > 0))
                {
                    system("say ok;say -f Name.txt;say Playing music ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Playing Music \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("ncspot");
                }
                else if ((strcmp(a, "OPEN YOUTUBE") == 0) || (strcmp(a, "YOUTUBE KHOLO") == 0) || (strcmp(a, "ACCESS YOUTUBE") == 0) || (strcmp(a, "START YOUTUBE") == 0) || (strcmp(a, "GO TO YOUTUBE") == 0) || (strcmp(a, "LAUNCH YOUTUBE") == 0) || (strcmp(a, "INITIATE YOUTUBE") == 0) || (strcmp(a, "ENTER YOUTUBE") == 0) || (strcmp(a, "TRIGGER YOUTUBE") == 0) || (strcmp(a, "OPEN YOUTUBE APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Youtube ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Youtube \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a YouTube");
                }
                else if ((strcmp(a, "CLOSE YOUTUBE") == 0) || (strcmp(a, "YOUTUBE BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN YOUTUBE") == 0) || (strcmp(a, "CLOSE YOUTUBE APP") == 0) || (strcmp(a, "QUIT YOUTUBE") == 0) || (strcmp(a, "EXIT YOUTUBE") == 0) || (strcmp(a, "LEAVE YOUTUBE") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Youtube ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Youtube \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill YouTube");
                }
                else if ((strnstr(a, "YOUTUBE", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Youtube");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Youtube\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Youtube\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Youtube");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Youtube\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Youtube");

                                system("open -a YouTube");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Youtube\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Youtube");

                                system("pkill YouTube");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if ((strcmp(a, "OPEN GMAIL") == 0) || (strcmp(a, "GMAIL KHOLO") == 0) || (strcmp(a, "ACCESS GMAIL") == 0) || (strcmp(a, "START GMAIL") == 0) || (strcmp(a, "GO TO GMAIL") == 0) || (strcmp(a, "LAUNCH GMAIL") == 0) || (strcmp(a, "INITIATE GMAIL") == 0) || (strcmp(a, "ENTER GMAIL") == 0) || (strcmp(a, "TRIGGER GMAIL") == 0) || (strcmp(a, "OPEN GMAIL APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Mail ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Mail \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Mail");
                }
                else if ((strcmp(a, "CLOSE GMAIL") == 0) || (strcmp(a, "GMAIL BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN GMAIL") == 0) || (strcmp(a, "CLOSE GMAIL APP") == 0) || (strcmp(a, "QUIT GMAIL") == 0) || (strcmp(a, "EXIT GMAIL") == 0) || (strcmp(a, "LEAVE GMAIL") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Mail");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Mail \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Mail");
                }
                else if ((strnstr(a, "GMAIL", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Mail");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Mail\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Mail\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Mail");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Mail\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Mail");

                                system("open -a Mail");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Mail\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Mail");

                                system("pkill Mail");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say ok ;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN CALCULATOR") == 0) || (strcmp(a, "OPEN CALUCLATOR") == 0) || (strcmp(a, "CALCULATOR KHOLO") == 0) || (strcmp(a, "ACCESS CALCULATOR") == 0) || (strcmp(a, "START CALCULATOR") == 0) || (strcmp(a, "GO TO CALCULATOR") == 0) || (strcmp(a, "LAUNCH CALCULATOR") == 0) || (strcmp(a, "INITIATE CALCULATOR") == 0) || (strcmp(a, "ENTER CALCULATOR") == 0) || (strcmp(a, "TRIGGER CALCULATOR") == 0) || (strcmp(a, "OPEN CALCULATOR APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Calculator ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Calculator \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Calculator");
                }
                else if ((strcmp(a, "CLOSE CALCULATOR") == 0) || (strcmp(a, "CLOSE CALUCLATOR") == 0) || (strcmp(a, "CALCULATOR BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN CALCULATOR") == 0) || (strcmp(a, "CLOSE CALCULATOR APP") == 0) || (strcmp(a, "QUIT CALCULATOR") == 0) || (strcmp(a, "EXIT CALCULATOR") == 0) || (strcmp(a, "LEAVE CALCULATOR") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Calculator ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Calculator \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Calculator");
                }

                else if ((strnstr(a, "CALCULATOR", 1000) > 0) || (strnstr(a, "CALUCLATOR", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Calculator");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Calculator\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Calculator\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Calculator");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Calculator\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Calculator");

                                system("open -a Calculator");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Calculator\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Calculator");

                                system("pkill Calculator");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if (strnstr(a, "MAIL DETAILS", 1000) > 0)
                {
                    system("say ok;say -f Name.txt;say Getting mail details");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Getting mail details\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("nano ~/.muttrc");
                }

                else if ((strnstr(a, "MAIL", 1000) > 0))

                {
                    system("say PLEASE ENTER THE DETAILS ;say -f Name.txt");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPlease Enter the details \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("mutt");
                }
                else if ((strcmp(a, "OPEN APP STORE") == 0) || (strcmp(a, "APP STORE KHOLO") == 0) || (strcmp(a, "ACCESS APP STORE") == 0) || (strcmp(a, "START APP STORE") == 0) || (strcmp(a, "GO TO APP STORE") == 0) || (strcmp(a, "LAUNCH APP STORE") == 0) || (strcmp(a, "INITIATE APP STORE") == 0) || (strcmp(a, "ENTER APP STORE") == 0) || (strcmp(a, "TRIGGER APP STORE") == 0) || (strcmp(a, "OPEN APP STORE APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening App store ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening App store \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("open -a 'App Store'");
                }
                else if ((strcmp(a, "CLOSE APP STORE") == 0) || (strcmp(a, "APP STORE BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN APP STORE") == 0) || (strcmp(a, "CLOSE APP STORE APP") == 0) || (strcmp(a, "QUIT APP STORE") == 0) || (strcmp(a, "EXIT APP STORE") == 0) || (strcmp(a, "LEAVE APP STORE") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing App store ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing App store \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill 'App Store'");
                }
                else if ((strnstr(a, "APP STORE", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access App Store");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Do you mean - You want to access App Store\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open App Store\n\t\t\tPress \33[4;94mESC\33[0;36m key to close App Store");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening App Store\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening App Store");

                                system("open -a 'App Store'");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing App Store\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing App Store");

                                system("pkill 'App Store'");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN TEXT EDITOR") == 0) || (strcmp(a, "TEXT EDITOR KHOLO") == 0) || (strcmp(a, "ACCESS TEXT EDITOR") == 0) || (strcmp(a, "START TEXT EDITOR") == 0) || (strcmp(a, "GO TO TEXT EDITOR") == 0) || (strcmp(a, "LAUNCH TEXT EDITOR") == 0) || (strcmp(a, "INITIATE TEXT EDITOR") == 0) || (strcmp(a, "ENTER TEXT EDITOR") == 0) || (strcmp(a, "TRIGGER TEXT EDITOR") == 0) || (strcmp(a, "OPEN TEXT EDITOR APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Text editor");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Text Editor \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a TextEdit");
                }
                else if ((strnstr(a, "TIME", 1000) > 0))
                {
                    time_t s, val = 1;
                    struct tm *current_time;
                    s = time(NULL);
                    current_time = localtime(&s);

                    if (current_time->tm_hour > 23 || current_time->tm_min > 59)
                    {
                        return 1;
                    }
                    if (current_time->tm_hour >= 12)
                    {
                        n = 1;

                        if (current_time->tm_hour > 12)
                        {
                            current_time->tm_hour = current_time->tm_hour - 12;
                        }
                    }
                    else
                    {
                        n = 0;
                    }

                    if (n == 0)
                    {

                        f1 = fopen("chat.txt", "w");
                        fprintf(f1, "Its around ,%d,%d ,a.m ", current_time->tm_hour, current_time->tm_min);
                        fclose(f1);
                        system("say -f Name.txt;say -f chat.txt");
                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%02d:%02d A.M\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", current_time->tm_hour, current_time->tm_min);
                    }
                    else
                    {

                        f1 = fopen("chat.txt", "w");
                        fprintf(f1, "Its around ,%d,%d ,p.m", current_time->tm_hour, current_time->tm_min);
                        fclose(f1);
                        system("say -f Name.txt;say -f chat.txt");
                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%02d:%02d P.M\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", current_time->tm_hour, current_time->tm_min);
                    }
                }

                else if ((strcmp(a, "CLOSE TEXT EDITOR") == 0) || (strcmp(a, "TEXT EDITOR BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN TEXT EDITOR") == 0) || (strcmp(a, "CLOSE TEXT EDITOR APP") == 0) || (strcmp(a, "QUIT TEXT EDITOR") == 0) || (strcmp(a, "EXIT TEXT EDITOR") == 0) || (strcmp(a, "LEAVE TEXT EDITOR") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Text Editor");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Text Editor \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill TextEdit");
                }
                else if ((strnstr(a, "TEXT", 1000) > 0) || (strnstr(a, "EDITOR", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Text Editor ");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Text Editor\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Text Editor\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Text Editor");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Text Editor\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Text Editor");

                                system("open -a TextEdit");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Text Editor\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Text Editor");

                                system("pkill TextEdit");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN VISUAL STUDIO CODE") == 0) || (strcmp(a, "VISUAL STUDIO CODE KHOLO") == 0) || (strcmp(a, "ACCESS VISUAL STUDIO CODE") == 0) || (strcmp(a, "START VISUAL STUDIO CODE") == 0) || (strcmp(a, "GO TO VISUAL STUDIO CODE") == 0) || (strcmp(a, "LAUNCH VISUAL STUDIO CODE") == 0) || (strcmp(a, "INITIATE VISUAL STUDIO CODE") == 0) || (strcmp(a, "ENTER VISUAL STUDIO CODE") == 0) || (strcmp(a, "TRIGGER VISUAL STUDIO CODE") == 0) || (strcmp(a, "OPEN VS CODE") == 0))
                {
                    system("say ok;say -f Name.txt;say opening Visual Studio Code");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Visual Studio Code \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a 'Visual Studio Code'");
                }
                else if ((strcmp(a, "CLOSE VISUAL STUDIO CODE") == 0) || (strcmp(a, "VISUAL STUDIO CODE BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN VISUAL STUDIO CODE") == 0) || (strcmp(a, "CLOSE VS CODE") == 0) || (strcmp(a, "QUIT VISUAL STUDIO CODE") == 0) || (strcmp(a, "EXIT VISUAL STUDIO CODE") == 0) || (strcmp(a, "LEAVE VISUAL STUDIO CODE") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Visual Studio Code");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Visual Studio Code \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("pkill Electron");
                }

                else if ((strnstr(a, "VISUAL STUDIO", 1000) > 0) || (strnstr(a, "VS CODE", 1000) > 0) || (strnstr(a, "VS", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Visual studio code");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Visual studio code\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Visual studio code\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Visual studio code");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Visual studio code\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Visual studio code ");

                                system("open -a 'Visual Studio Code'");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Visual studio code\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Visual studio code");

                                system("pkill Electron");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }
                else if ((strnstr(a, "PLAY", 1000) > 0))
                {
                    strcpy(q, "PLAY");
                    r = strstr(a, "PLAY");
                    ls = strlen(r);
                    lw = strlen(q);
                    for (i = 0; i < ls; i++)
                    {
                        temp = i;
                        doIncrement = 0;
                        for (j = 0; j < lw; j++)
                        {
                            if (r[i] == q[j])
                            {
                                if (temp > 0 && (temp + lw) < ls)
                                {
                                    if (r[temp - 1] == ' ' && r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp == 0 && (temp + lw) < ls)
                                {
                                    if (r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp > 0 && (temp + lw) == ls)
                                {
                                    if (r[temp - 1] == ' ')
                                        doIncrement = 1;
                                }
                                if (doIncrement == 1)
                                    i++;
                                else
                                    break;
                            }
                        }
                        chk = i - temp;
                        if (chk == lw)
                        {
                            i = temp;
                            for (j = i; j < (ls - lw); j++)
                                r[j] = r[j + lw];
                            ls = ls - lw;
                            i = temp;
                            r[j] = '\0';
                        }
                    }
                    ls = strlen(r);
                    i = 0;
                    while (r[i] != '\0')
                    {
                        isSpace = 0;
                        if (r[i] == ' ' && r[i + 1] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (i == 0 && r[i] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (isSpace == 0)
                            i++;
                        else
                        {
                            r[j] = '\0';
                            ls--;
                        }
                    }

                    strcat(str2, r);
                    strcpy(cmd, str2);
                    f1 = fopen("Search.txt", "w");
                    fprintf(f1, "PLAYING %s", r);
                    fclose(f1);

                    system("say -f Search.txt");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPlaying %s\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", r);

                    system(cmd);
                }

                else if ((strcmp(a, "OPEN TERMINAL") == 0) || (strcmp(a, "TERMINAL KHOLO") == 0) || (strcmp(a, "ACCESS TERMINAL") == 0) || (strcmp(a, "START TERMINAL") == 0) || (strcmp(a, "GO TO TERMINAL") == 0) || (strcmp(a, "LAUNCH TERMINAL") == 0) || (strcmp(a, "INITIATE TERMINAL") == 0) || (strcmp(a, "ENTER TERMINAL") == 0) || (strcmp(a, "TRIGGER TERMINAL") == 0) || (strcmp(a, "OPEN TERMINAL APP") == 0))
                {
                    system("say ok;say -f Name.txt;say opening Terminal");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Terminal \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Terminal");
                }
                else if ((strcmp(a, "CLOSE TERMINAL") == 0) || (strcmp(a, "TERMINAL BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN TERMINAL") == 0) || (strcmp(a, "CLOSE TERMINAL APP") == 0) || (strcmp(a, "QUIT TERMINAL") == 0) || (strcmp(a, "EXIT TERMINAL") == 0) || (strcmp(a, "LEAVE TERMINAL") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Terminal");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Terminal \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Terminal");
                }

                else if (strnstr(a, "TERMINAL", 1000) > 0)
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Terminal");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Terminal\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Terminal\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Terminal");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Terminal\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Terminal ");

                                system("open -a Terminal");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Terminal\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Terminal");

                                system("pkill Terminal");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN SETTINGS") == 0) || (strcmp(a, "SETTINGS KHOLO") == 0) || (strcmp(a, "ACCESS SETTINGS") == 0) || (strcmp(a, "START SETTINGS") == 0) || (strcmp(a, "GO TO SETTINGS") == 0) || (strcmp(a, "LAUNCH SETTINGS") == 0) || (strcmp(a, "INITIATE SETTINGS") == 0) || (strcmp(a, "ENTER SETTINGS") == 0) || (strcmp(a, "TRIGGER SETTINGS") == 0) || (strcmp(a, "OPEN SETTINGS APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Settings ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Settings \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a 'System Preferences'");
                }
                else if ((strcmp(a, "CLOSE SETTINGS") == 0) || (strcmp(a, "SETTINGS BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN SETTINGS") == 0) || (strcmp(a, "CLOSE SETTINGS APP") == 0) || (strcmp(a, "QUIT SETTINGS") == 0) || (strcmp(a, "EXIT SETTINGS") == 0) || (strcmp(a, "LEAVE SETTINGS") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Settings ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Settings \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill 'System Preferences'");
                }

                else if ((strnstr(a, "SETTINGS", 1000) > 0) || (strnstr(a, "SYSTEM", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Settings");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Settings\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Settings\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Settings");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Settings\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Settings");

                                system("open -a 'System Preferences'");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Settings\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Settings");

                                system("pkill 'System Preferences'");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN TELEGRAM") == 0) || (strcmp(a, "TELEGRAM KHOLO") == 0) || (strcmp(a, "ACCESS TELEGRAM") == 0) || (strcmp(a, "START TELEGRAM") == 0) || (strcmp(a, "GO TO TELEGRAM") == 0) || (strcmp(a, "LAUNCH TELEGRAM") == 0) || (strcmp(a, "INITIATE TELEGRAM") == 0) || (strcmp(a, "ENTER TELEGRAM") == 0) || (strcmp(a, "TRIGGER TELEGRAM") == 0) || (strcmp(a, "OPEN TELEGRAM APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Telegram ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Telegram \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Telegram");
                }
                else if ((strcmp(a, "CLOSE TELEGRAM") == 0) || (strcmp(a, "TELEGRAM BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN TELEGRAM") == 0) || (strcmp(a, "CLOSE TELEGRAM APP") == 0) || (strcmp(a, "QUIT TELEGRAM") == 0) || (strcmp(a, "EXIT TELEGRAM") == 0) || (strcmp(a, "LEAVE TELEGRAM") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Telegram ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Telegram \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Telegram");
                }

                else if (strnstr(a, "TELEGRAM", 1000) > 0)
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Telegram");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Telegram\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Telegram\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Telegram");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Telegram\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Telegram");

                                system("open -a Telegram");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Telegram\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Telegram");

                                system("pkill Telegram");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if ((strcmp(a, "OPEN FINDER") == 0) || (strcmp(a, "FINDER KHOLO") == 0) || (strcmp(a, "ACCESS FINDER") == 0) || (strcmp(a, "START FINDER") == 0) || (strcmp(a, "GO TO FINDER") == 0) || (strcmp(a, "LAUNCH FINDER") == 0) || (strcmp(a, "INITIATE FINDER") == 0) || (strcmp(a, "ENTER FINDER") == 0) || (strcmp(a, "TRIGGER FINDER") == 0) || (strcmp(a, "OPEN FINDER APP") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Finder ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Finder \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" open -a Finder");
                }
                else if ((strcmp(a, "CLOSE FINDER") == 0) || (strcmp(a, "FINDER BANDH KARO") == 0) || (strcmp(a, "SHUT DOWN FINDER") == 0) || (strcmp(a, "CLOSE FINDER APP") == 0) || (strcmp(a, "QUIT FINDER") == 0) || (strcmp(a, "EXIT FINDER") == 0) || (strcmp(a, "LEAVE FINDER") == 0))
                {
                    system("say ok;say -f Name.txt;say Closing Finder ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Finder \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system(" pkill Finder");
                }
                else if ((strnstr(a, "FINDER", 1000) > 0) || (strnstr(a, "FILES", 1000) > 0) || (strnstr(a, "FOLDER", 1000) > 0))
                {
                    {
                        system("say -f Name.txt;say Do you mean - you want to access Finder");

                        printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m%s Do you mean - You want to access Finder\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                        scanf("%[^\n]%*c", a1);
                        for (b = 0; a1[b] != 0; b++)
                        {
                            if (a1[b] >= 'a' && a1[b] <= 'z')
                            {
                                a1[b] = a1[b] - 32;
                            }
                        }
                        if ((strcmp(a1, "YES") == 0))
                        {
                            system("say press any  key , from above ");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mPress \33[4;95mTAB\33[0;36m key to open Finder\n\t\t\tPress \33[4;94mESC\33[0;36m key to close Finder");

                            ch = fgetc(stdin);

                            if (ch == 9)
                            {

                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tTAB\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Finder\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Opening Finder");

                                system("open -a Finder");
                            }
                            else if (ch == 27)
                            {
                                printf("\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\tESC\n\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Closing Finder\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                                system("say ok;say -f Name.txt;say Closing Finder");

                                system("pkill Finder");
                            }

                            ch = getchar();
                        }
                        else if ((strcmp(a1, "NO") == 0))
                        {
                            system("say Ok;say -f Name.txt");

                            printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOK\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                        }
                    }
                }

                else if (strnstr(a, "DATE", 1000) > 0)
                {
                    time_t T = time(NULL);
                    struct tm tm = *localtime(&T);
                    k = tm.tm_mday;
                    l = tm.tm_mon + 1;
                    z = tm.tm_year + 1900;
                    f1 = fopen("chat.txt", "w");
                    fprintf(f1, "%d-%d-%d", k, l, z);
                    fclose(f1);
                    system("say -f chat.txt");
                    printf("\nSenorita  \33[1;90m--------> \t\33[0;36m%d/%d/%d\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", k, l, z);
                }
                else if (strnstr(a, "CALENDAR", 1000) > 0)
                {
                    system("say ok;say -f Name.txt;say Opening Calendar ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening Calendar \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("cal");
                }
                else if ((strcmp(a, "HOW OLD ARE YOU") == 0) || (strnstr(a, "AGE", 1000) > 0))
                {
                    time_t T = time(NULL);
                    struct tm tm = *localtime(&T);
                    k = tm.tm_mday;
                    l = tm.tm_mon + 1;
                    z = tm.tm_year + 1900;
                    if (k >= 30)
                    {
                        k = k - 30;
                    }
                    else
                    {
                        l--;
                        k = k + 30;
                        k = k - 30;
                    }
                    if (l >= 10)
                    {
                        l = l - 10;
                    }
                    else
                    {
                        z--;
                        l = l + 12;
                        l = l - 10;
                    }
                    z = z - 2021;

                    f1 = fopen("chat.txt", "w");
                    fprintf(f1, "I am %d days , %d months and , %d years , old .", k, l, z);
                    fclose(f1);
                    system("say -f Name.txt;say -f chat.txt");
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mI am %d days, %d months and %d years old\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", k, l, z);
                }
                else if ((strcmp(a, "ARE YOU A BOT") == 0) || (strcmp(a, "WHO ARE YOU") == 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mYes I am a bot, but I’m a good one. Let me prove it. How can I help you ?\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say Yes I am a bot, but I’m a good one. Let me prove it. How can I help you ?");
                }
                else if ((strnstr(a, "WEATHER", 1000) > 0) || (strnstr(a, "TEMPERATURE", 1000) > 0))
                {
                    system("say ok;say -f Name.txt;say getting weather reports");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Getting weather reports \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("curl wttr.in");
                }
                else if (strnstr(a, "ON WIFI", 1000) > 0)
                {
                    system("say ok;say -f Name.txt;say switching on wifi ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Switching on wifi\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("networksetup -setairportpower airport on");
                }
                else if ((strnstr(a, "OF WIFI", 1000) > 0) || (strnstr(a, "OFF WIFI", 1000) > 0))
                {
                    system("say ok;say -f Name.txt;say switching off wifi ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Switching off wifi\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("networksetup -setairportpower airport off");
                }
                else if (strnstr(a, "ON BLUETOOTH", 1000) > 0)
                {
                    system("say ok;say -f Name.txt;say switching on Bluetooth ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Switching on Bluetooth\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("blueutil -p on");
                }
                else if ((strnstr(a, "OF BLUETOOTH", 1000) > 0) || (strnstr(a, "OFF BLUETOOTH", 1000) > 0))
                {
                    system("say ok;say -f Name.txt;say switching off Bluetooth");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Switching off Bluetooth\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("blueutil -p off");
                }
                else if (strnstr(a, "MAP", 1000) > 0)
                {
                    system("say ok;say -f Name.txt;say opening world map ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s Opening world map \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("telnet mapscii.me");
                }
                else if ((strcmp(a, "HOW ARE YOU") == 0) || (strcmp(a, "HOW IS YOUR DAY") == 0) || (strcmp(a, "ARE YOU FINE") == 0))
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mI'm having a great day so far! I like to feel useful.\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say I am having a great day so far! I like to feel useful");
                }
                else if (strcmp(a, "NO") == 0)
                {
                    system("say It was nice talking to you! Please be free to text me for any further assistance.");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mIt was nice talking to you! Please be free to text me for any further assistance.\33[0m\n\n");

                    system("say -f Name.txt;say please give your valuable feedback , So that we can improve.");

                    system("open https://docs.google.com/forms/d/e/1FAIpQLScCYvZ04bZ9I_4vUF16KpN_XOwWDy-E3N6_20KOIemXbMe5ow/viewform?usp=sf_link");

                    exit(0);
                }
                else if (strnstr(a, "CAN YOU DO", 1000) > 0)
                {
                    system("say I can do many things, for example you can ask me time , date,weather. I can open applications, close applications , Search ,Play music , play youtube videos and many more. See the list of commands -");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mI can do many things, for example you can ask me time , date,weather. I can open applications, close applications , Search ,Play music , play youtube videos and many more. See the list of commands -\n\n\33[0;95m 'date'              \33[0;97m: Example - 'what date it is ?'\n\33[0;95m 'open applications' \33[0;97m: Example - 'open chrome'\n\33[0;95m 'search'            \33[0;97m: Example - 'search todays gold prices'\n\33[0;95m 'time'              \33[0;97m: Example - 'What time is now'\n\33[0;95m 'weather'           \33[0;97m: Example - 'what is the weather today?'\n\33[0;95m 'Music'             \33[0;97m: Example - 'Play music'\n\33[0;95m 'Youtube Video'     \33[0;97m: Example - 'Play Avengers End game trailer'\n \33[0;95m'Mail'              \33[0;97m: Example - 'Send mail'\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");
                }
                else if ((strnstr(a, "OPEN", 1000) > 0))
                {
                    strcpy(q, "OPEN");
                    r = strstr(a, "OPEN");
                    ls = strlen(r);
                    lw = strlen(q);
                    for (i = 0; i < ls; i++)
                    {
                        temp = i;
                        doIncrement = 0;
                        for (j = 0; j < lw; j++)
                        {
                            if (r[i] == q[j])
                            {
                                if (temp > 0 && (temp + lw) < ls)
                                {
                                    if (r[temp - 1] == ' ' && r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp == 0 && (temp + lw) < ls)
                                {
                                    if (r[temp + lw] == ' ')
                                        doIncrement = 1;
                                }
                                else if (temp > 0 && (temp + lw) == ls)
                                {
                                    if (r[temp - 1] == ' ')
                                        doIncrement = 1;
                                }
                                if (doIncrement == 1)
                                    i++;
                                else
                                    break;
                            }
                        }
                        chk = i - temp;
                        if (chk == lw)
                        {
                            i = temp;
                            for (j = i; j < (ls - lw); j++)
                                r[j] = r[j + lw];
                            ls = ls - lw;
                            i = temp;
                            r[j] = '\0';
                        }
                    }
                    ls = strlen(r);
                    i = 0;
                    while (r[i] != '\0')
                    {
                        isSpace = 0;
                        if (r[i] == ' ' && r[i + 1] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (i == 0 && r[i] == ' ')
                        {
                            for (j = i; j < (ls - 1); j++)
                            {
                                r[j] = r[j + 1];
                                isSpace = 1;
                            }
                        }
                        if (isSpace == 0)
                            i++;
                        else
                        {
                            r[j] = '\0';
                            ls--;
                        }
                    }

                    strcat(str1, r);
                    strcpy(cmd, str1);
                    f1 = fopen("Search.txt", "w");
                    fprintf(f1, "SEARCHING FOR %s", r);
                    fclose(f1);

                    system("say -f Search.txt");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mSearching for %s\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", r);

                    system(cmd);
                }

                else if ((strnstr(a, "VIDEO", 1000) > 0) || (strnstr(a, "TRAILER", 1000) > 0) || (strnstr(a, "MOVIE", 1000) > 0) || (strnstr(a, "VIDEO SONG", 1000) > 0))
                {
                    system("say -f Name.txt;say What Video do you want to play ");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mOk %s ,What do you want to search ?\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("ytfzf");
                }

                else if (strnstr(a, "FRIENDS", 1000) > 0)
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m-------> \t\33[0;36mThe engineers are my friends. They help me help you.\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say The engineers are my friends. They help me and help you.");
                }
                else if (strnstr(a, "EAT", 1000) > 0)
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m-------> \t\33[0;36mI don’t eat much, but when I do, I take megabytes.\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t");

                    system("say I don’t eat much, but when I do, I take megabytes.");
                }
                else if (strnstr(a, "SCENORITA", 1000) > 0)
                {
                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mYeah %s how may i help you ?\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);

                    system("say Yeah;say -f Name.txt;say How may i help you");
                }
                else if ((strnstr(a, "HELP", 1000) > 0) || (strcmp(a, "?") == 0))
                {
                    system("say ok;say -f Name.txt;say Opening Help menu");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36m Ok %s opening help menu\n\n\n\33[1;94m====== Music Controls ======\n\n\n\33[0;95m+            \33[0;97m-> volup 1\n\n\33[0;95m-            \33[0;97m-> voldown 1\n\n\33[0;95m<            \33[0;97m-> previous\n\n\33[0;95m>            \33[0;97m-> next\n\n\33[0;95mDelete       \33[0;97m-> back\n\n\33[0;95mReturn       \33[0;97m-> play\n\n\33[0;95mF2           \33[0;97m-> Search\n\n\33[0;95mo            \33[0;97m-> Open/view Selected\n\n\33[0;95mDown/Up      \33[0;97m-> Navigation from top to bottom\n\n\33[0;95mleft/right   \33[0;97m-> Navigation between tabs\n\n\33[0;95mshift + p    \33[0;97m-> play/pause\n\n\33[0;95mctrl + c     \33[0;97m-> Quit\n\n\n\33[1;94m====== Mail  Controls ======\n\n\n\33[0;95mm            \33[0;97m-> Mail\n\n\33[0;95mr            \33[0;97m-> Reply to selected mail\n\n\33[0;95ms            \33[0;97m-> Save mail\n\n\33[0;95mesc + :wq    \33[0;97m-> To save and quit the composing\n\n\33[0;95my            \33[0;97m-> To Send\n\n\33[0;95mctrl + c     \33[0;97m-> Quit\n\n\n\33[1;94m====== Video Controls ======\n\n\n\33[0;95mReturn       \33[0;97m-> play selected\n\n\33[0;95mSpace        \33[0;97m-> play/pause\n\n\33[0;95mleft/right   \33[0;97m-> forward or backward\n\n\33[0;95mDouble tap   \33[0;97m-> Zoom in or out\n\n\33[0;95mctrl + c     \33[0;97m-> Quit\n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);
                }
                else
                {
                    system("say Sorry;say -f Name.txt;say I am not trained for this question, is there anything else you want to know about?");

                    printf("\n\33[1;91mSenorita  \33[1;90m--------> \t\33[0;36mSorry %s, I am not trained for this question, is there anything else you want to know about? \n\n\33[1;32mUser      \33[1;90m--------> \33[0;33m\t", f);
                }
            }
        }
    }
    return 0;
}
