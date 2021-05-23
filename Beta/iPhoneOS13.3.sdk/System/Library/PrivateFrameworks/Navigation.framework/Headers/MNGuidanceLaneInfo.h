/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSUUID;

@interface MNGuidanceLaneInfo : NSObject

{
    _Bool _isForManeuver;
    int _composedGuidanceEventIndex;
    NSUUID *_uniqueID;
    NSArray *_lanes;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
    NSArray *_titles;
    NSArray *_instructions;
}

@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) _Bool isForManeuver;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSArray *instructions;
@property (nonatomic, readonly) NSDictionary *variableOverrides;
@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic, readonly) int composedGuidanceEventIndex;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 isForManeuver:(_Bool)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7 composedGuidanceEventIndex:(int)arg8;

@end
