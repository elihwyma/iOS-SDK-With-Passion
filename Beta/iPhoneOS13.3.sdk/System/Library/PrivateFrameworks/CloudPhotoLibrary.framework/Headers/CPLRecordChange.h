/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLScopedIdentifier, NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject

{
    NSString *_uploadIdentifier;
    _Bool _shouldNotTrustCloudCache;
    _Bool _shouldFilterDefaultValuesForNewProperties;
    _Bool _isSparseFullChange;
    _Bool _shouldOnlyUploadNewResources;
    _Bool _didCacheRealResourceSizeInStorage;
    unsigned long long _cachedRealResourceSizeInStorage;
    _Bool _inTrash;
    _Bool _inExpunged;
    _Bool _serverRecordIsCorrupted;
    CPLScopedIdentifier *_scopedIdentifier;
    NSDate *_recordModificationDate;
    unsigned long long _changeType;
    NSDate *_dateDeleted;
    CPLScopedIdentifier *_resourceCopyFromScopedIdentifier;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

@property (copy, nonatomic) NSString *realIdentifier;
@property (copy, nonatomic) NSData *recordChangeData;
@property (nonatomic) _Bool serverRecordIsCorrupted;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (nonatomic) unsigned long long changeType;
@property (copy, nonatomic) NSDate *dateDeleted;
@property (copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier;
@property (nonatomic) _Bool inTrash;
@property (nonatomic) _Bool inExpunged;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)newDeleteChangeWithScopedIdentifier:(id)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithScopedIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newRecordWithScopedIdentifier:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)descriptionForDirection:(unsigned long long)arg1;
+ (id)newRecord;
+ (id)newRecordInScopeWithIdentifier:(id)arg1;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(_Bool)arg2 onlyUploadNewResources:(_Bool)arg3;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newDeleteChangeWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDelete;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)clearIdentifiers;
- (_Bool)supportsResources;
- (_Bool)hasChangeType:(unsigned long long)arg1;
- (_Bool)isFullRecord;
- (unsigned long long)realResourceSize;
- (_Bool)supportsDeletion;
- (id)secondaryIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (long long)dequeueOrder;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)resourceForType:(unsigned long long)arg1;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (_Bool)supportsResourceType:(unsigned long long)arg1;
- (_Bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (_Bool)allowsToOnlyUploadNewResources;
- (_Bool)isMasterChange;
- (id)cplFullDescription;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)proposedCloudScopedIdentifierWithError:(id *)arg1;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (void)setScopeIndex:(long long)arg1;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)scopedIdentifierForQuarantine;
- (_Bool)validateFullRecord;
- (id)_uploadIdentifier;
- (_Bool)_shouldNotTrustCloudCache;
- (id)_unscopedIdentifier;
- (id)realScopedIdentifier;
- (_Bool)isInScopeWithIdentifier:(id)arg1;
- (unsigned long long)totalResourceSize;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (unsigned long long)originalResourceSize;
- (_Bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id *)arg5;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 changeType:(unsigned long long)arg4 updatedProperties:(id *)arg5;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 updatedProperties:(id *)arg4;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;
- (_Bool)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)proposedLocalScopedIdentifier;
- (id)scopedIdentifiersForQuarantine;
- (id)allRelatedScopedIdentifiers;
- (void)prepareForStorage;
- (void)awakeFromStorage;
- (id)resourcesDescription;
- (_Bool)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (void)setShouldFilterDefaultValuesForNewProperties:(_Bool)arg1;
- (_Bool)shouldFilterDefaultValuesForNewProperties;
- (_Bool)isSparseFullChange;
- (void)markAsSparseFullChange;
- (void)markToOnlyUploadNewResources;
- (_Bool)shouldOnlyUploadNewResources;
- (_Bool)changeIsOnlyAddingResourcesToRecord:(id)arg1 addedResources:(id *)arg2;
- (id)onlyAddedResources;
- (_Bool)validateChangeWithError:(id *)arg1;
- (unsigned long long)estimatedRecordSize;
- (void)_setUploadIdentifier:(id)arg1;
- (void)_setShouldNotTrustCloudCache:(_Bool)arg1;
- (_Bool)_canLowerQuota;
- (unsigned long long)fullChangeTypeForFullRecord;
- (_Bool)allResourcesAreAvailable;
- (id)resourcePerType;
- (unsigned long long)baseDerivativeResourceType;
- (unsigned long long)baseVideoComplemenentResourceType;
- (void)copyDerivatives:(unsigned long long *)arg1 count:(int)arg2 avoidResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (id)copyChangeType:(unsigned long long)arg1;
- (_Bool)isAssetChange;
- (_Bool)validateRecordForTracker:(id)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end
