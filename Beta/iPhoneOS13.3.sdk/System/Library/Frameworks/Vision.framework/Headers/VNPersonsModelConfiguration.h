/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNPersonsModelConfiguration : NSObject

{
    unsigned long long _maximumIdentities;
    unsigned long long _maximumFaceprintsPerIdentity;
    unsigned long long _faceprintRequestRevision;
}

@property (nonatomic) unsigned long long maximumFaceprintsPerIdentity;
@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)faceIDModelMaximumElementsPerID;

@end
