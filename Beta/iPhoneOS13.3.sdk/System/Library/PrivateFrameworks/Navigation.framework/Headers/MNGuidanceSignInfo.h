/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNGuidanceSignDescription;

@interface MNGuidanceSignInfo : NSObject

{
    MNGuidanceSignDescription *_primarySign;
    MNGuidanceSignDescription *_secondarySign;
    double _primaryDistance_SIRI_USE_ONLY;
    double _secondaryDistance_SIRI_USE_ONLY;
    double _timeUntilPrimarySign_SIRI_USE_ONLY;
    double _timeUntilSecondarySign_SIRI_USE_ONLY;
}

@property (nonatomic, readonly) MNGuidanceSignDescription *primarySign;
@property (nonatomic, readonly) MNGuidanceSignDescription *secondarySign;
@property (nonatomic, readonly) double primaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) double secondaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (nonatomic, readonly) double timeUntilSecondarySign_SIRI_USE_ONLY;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimarySign:(id)arg1 secondarySign:(id)arg2 primaryDistance:(double)arg3 secondaryDistance:(double)arg4 timeUntilPrimarySign:(double)arg5 timeUntilSecondarySign:(double)arg6;

@end
