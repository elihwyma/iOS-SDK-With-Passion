/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject

{
    NSString *_subcommandName;
    NSMutableArray *_optionArray;
}

+ (id)subcommandWithName:(id)arg1;

- (int)run;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)stop;
- (void)showHelp;
- (void)addOption:(BOOL)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(_Bool)arg6;
- (id)optionArray;
- (id)subcommandName;
- (id)formattedHelpHeader;
- (id)formattedHelpFooter;
- (void)addOptions;
- (void)stopDueToSigTerm;

@end
