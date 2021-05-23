/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AFUISiriPPTManager : NSObject

{
    _Bool _runningPPT;
    NSString *_currentTestName;
    NSDictionary *_testOptions;
}

@property (nonatomic, readonly) _Bool runningPPT;
@property (copy, nonatomic, readonly) NSString *currentTestName;
@property (copy, nonatomic, readonly) NSDictionary *testOptions;

+ (id)sharedManager;

- (void)reset;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(id)arg2 testOptions:(id)arg3;
- (void)setRunningPPT:(_Bool)arg1 withTestName:(id)arg2;
- (_Bool)isRunningTestName:(id)arg1;

@end
