/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject

{
    unsigned long long _backgroundDownloadTaskIdentifier;
    _Bool _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    CPLScopedIdentifier *_itemScopedIdentifier;
    unsigned long long _resourceType;
    unsigned long long _sourceResourceType;
}

@property (retain, nonatomic) CPLResourceIdentity *identity;
@property (copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long sourceResourceType;
@property (nonatomic) _Bool canGenerateDerivative;
@property (copy, nonatomic) NSString *itemIdentifier;

+ (_Bool)supportsSecureCoding;
+ (_Bool)resourceTypeTrackedForUpload:(unsigned long long)arg1;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (_Bool)cplShouldGenerateDerivatives;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (float)derivativeGenerationThreshold;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id *)arg2;
+ (unsigned long long)resourceTypeFromShortDecription:(id)arg1;
+ (_Bool)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1;
+ (_Bool)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (_Bool)resourceTypeSupportsResourceExpunge:(unsigned long long)arg1;
+ (void)enumerateResourceTypesWithBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)countOfResourceTypes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)initWithCPLArchiver:(id)arg1;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)bestFileNameForResource;
- (_Bool)isTrackedForUpload;
- (unsigned long long)estimatedResourceSize;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1;

@end
