/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSCondition;

@interface VSTimeoutCondition : NSObject

{
    _Bool _shouldStop;
    double _timeoutValue;
    NSCondition *_refreshTimeoutCondition;
}

@property (retain, nonatomic) NSCondition *refreshTimeoutCondition;
@property (nonatomic) _Bool shouldStop;
@property (nonatomic) double timeoutValue;

- (void)stop;
- (_Bool)wait;
- (void)refresh;
- (id)initWithTimeoutValue:(double)arg1;
- (_Bool)_waitForTimeInterval:(double)arg1;

@end
