/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@interface CACSignPostLog : NSObject

{
    unsigned long long _currentPerfID;
}

@property (nonatomic) unsigned long long currentPerfID;

+ (id)sharedInstance;
+ (id)sharedLog;
+ (id)_sFetchElementsLog;
+ (void)FetchElementsEventBeganWithReason:(id)arg1 expectedDelay:(double)arg2;
+ (void)FetchElementsEventCompletedWithNumberOfElements:(unsigned long long)arg1 numberOfElementsAlreadyCached:(unsigned long long)arg2;
+ (void)CommandStringReceived:(id)arg1;
+ (void)CommandStringExecuted:(id)arg1 success:(_Bool)arg2;

@end
