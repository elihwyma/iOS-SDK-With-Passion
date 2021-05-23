/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <NanoMusicSync/NMLogAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NMGenericMessageLogAction : NMLogAction

{
    NSString *_message;
}

+ (id)logActionWithMessage:(id)arg1;

- (id)initWithMessage:(id)arg1;
- (id)logMessage;

@end
