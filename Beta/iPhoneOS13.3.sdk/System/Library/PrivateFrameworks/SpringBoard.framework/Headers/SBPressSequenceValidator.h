/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject

{
    SBPressSequenceSettings *_settings;
}

@property (nonatomic, readonly) SBPressSequenceSettings *settings;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (_Bool)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(_Bool)arg2 duration:(double)arg3;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(_Bool)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(_Bool)arg2;

@end
