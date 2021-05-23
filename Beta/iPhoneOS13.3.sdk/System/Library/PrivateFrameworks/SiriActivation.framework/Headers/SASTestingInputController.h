/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class SiriTestingContext;

@interface SASTestingInputController : NSObject

{
    SiriTestingContext *_preloadedTestingInput;
}

@property (nonatomic, readonly) SiriTestingContext *preloadedTestingInput;

- (id)init;
- (void)dealloc;
- (id)dequeuePreloadedTestingContext;
- (void)_registerForTestingNotifications;
- (void)_testingStringsDidChange:(id)arg1;
- (void)_testingAudioInputPathsDidChange:(id)arg1;

@end
