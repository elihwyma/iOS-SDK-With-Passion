/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture

{
    _Bool _isLeftToRightSwipe;
    _Bool _isLandscape;
}

@property (nonatomic) _Bool isLeftToRightSwipe;
@property (nonatomic) _Bool isLandscape;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfEvents;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (_Bool)arePointsDeviceRelative;
- (void)updateForLandscape:(_Bool)arg1;
- (id)initForLeftToRightSwipe:(_Bool)arg1;

@end
