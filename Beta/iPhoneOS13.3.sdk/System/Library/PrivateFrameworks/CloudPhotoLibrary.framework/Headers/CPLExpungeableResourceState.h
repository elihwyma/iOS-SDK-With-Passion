/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject

{
    unsigned long long _resourceType;
    unsigned long long _expungedState;
    NSDate *_expungedDate;
}

@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long expungedState;
@property (copy, nonatomic) NSDate *expungedDate;

+ (_Bool)supportsSecureCoding;
+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
