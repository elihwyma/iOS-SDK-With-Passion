/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSDate, NSString;

@interface CSTimerView : SBFLockScreenDateSubtitleView <Swift>

{
    NSDate *_endDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setEndDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateLegibilityStrength;
- (id)_timerFont;
- (id)_newTimerDialForSettings:(id)arg1;
- (void)updateTimerLabel;

@end
