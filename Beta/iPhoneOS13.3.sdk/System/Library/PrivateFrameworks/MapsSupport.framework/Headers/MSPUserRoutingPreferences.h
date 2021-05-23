/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface MSPUserRoutingPreferences : NSObject

{
    _Bool _avoidTolls;
    _Bool _avoidHighways;
    NSDate *_timestamp;
    long long _defaultDisabledTransitModes;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) _Bool avoidTolls;
@property (nonatomic, readonly) _Bool avoidHighways;
@property (nonatomic, readonly) long long defaultDisabledTransitModes;

+ (_Bool)supportsSecureCoding;

- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAvoidTolls:(_Bool)arg1 avoidHighways:(_Bool)arg2 defaultDisabledTransitModes:(long long)arg3;
- (id)createUserPreferences;

@end
