/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentParser : SCRCArgumentSubcommand

{
    int _argc;
    char **_argv;
    NSMutableArray *_subcommandArray;
    NSMutableArray *_argumentArray;
    NSString *_appName;
    SCRCArgumentSubcommand *_subcommand;
    _Bool _isLaunchedAtLogin;
}

+ (id)processIdentifier;
+ (id)versionString;
+ (id)commandPath;

- (void)dealloc;
- (int)run;
- (void)stop;
- (_Bool)parse;
- (id)appName;
- (void)setAppName:(id)arg1;
- (char **)argv;
- (void)addSubcommand:(id)arg1;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (id)_displayHelp:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (int)argc;
- (_Bool)isLaunchedAtLogin;
- (id)setRunningAtStartup:(id)arg1;

@end
