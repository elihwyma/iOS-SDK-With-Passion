/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSAggdService : NSObject

{
    NSString *_loggingPrefix;
}

@property (retain, nonatomic) NSString *loggingPrefix;

+ (id)defaultService;

- (void)tallyTask:(id)arg1;
- (void)tallySynthesisCore:(id)arg1;
- (id)initWithLoggingPrefix:(id)arg1;
- (void)recordCategory:(id)arg1 value:(id)arg2;

@end
