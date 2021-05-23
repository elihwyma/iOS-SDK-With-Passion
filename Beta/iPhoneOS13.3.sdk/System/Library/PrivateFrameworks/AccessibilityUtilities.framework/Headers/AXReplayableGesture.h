/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AXReplayableGesture : NSObject

{
    NSArray *_allEvents;
    _Bool _arePointsDeviceRelative;
}

+ (_Bool)supportsSecureCoding;
+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfEvents;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (_Bool)arePointsDeviceRelative;
- (void)updateForLandscape:(_Bool)arg1;

@end
