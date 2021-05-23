/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TITypologyTimer : NSObject

{
    _Bool _foundFirstInput;
    double _elapsedTime;
    double _mostRecentTimestamp;
    double _maxTimeIntervalBetweenInputs;
}

@property (nonatomic) double elapsedTime;
@property (nonatomic) double mostRecentTimestamp;
@property (nonatomic) double maxTimeIntervalBetweenInputs;
@property (nonatomic) _Bool foundFirstInput;

- (void)addInputEventWithTimestamp:(double)arg1;

@end
