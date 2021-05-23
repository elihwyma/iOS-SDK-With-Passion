/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOJunction, NSArray, NSDictionary, NSString, NSUUID;

@interface MNGuidanceSignDescription : NSObject

{
    int _shieldID;
    int _composedGuidanceEventIndex;
    NSUUID *_uniqueID;
    NSArray *_titles;
    NSArray *_details;
    GEOJunction *_junction;
    NSString *_shieldText;
    NSString *_shieldStringID;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
}

@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, readonly) NSDictionary *variableOverrides;
@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic, readonly) GEOJunction *junction;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) int shieldID;
@property (nonatomic, readonly) NSString *shieldStringID;
@property (nonatomic, readonly) int composedGuidanceEventIndex;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10;

@end
