/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModelContainer, HMFVersion, NSMutableDictionary, NSSet, NSString, NSUUID;

@interface HMBModel : HMFObject

{
    NSMutableDictionary *_hmbReserved;
    NSUUID *_hmbModelID;
    NSUUID *_hmbParentModelID;
    NSString *_hmbType;
    HMFVersion *_hmbDataVersion;
    unsigned long long _hmbRecordRow;
    NSSet *_hmbUnavailableProperties;
    NSSet *_hmbReadOnlyProperties;
    HMBModelContainer *_hmbModelContainer;
}

@property (retain, nonatomic) NSMutableDictionary *hmbReserved;
@property (weak, nonatomic) HMBModelContainer *hmbModelContainer;
@property (retain, nonatomic) HMFVersion *hmbDataVersion;
@property (retain, nonatomic) NSUUID *hmbModelID;
@property (retain, nonatomic) NSUUID *hmbParentModelID;
@property (retain, nonatomic) NSString *hmbType;
@property (retain, nonatomic) NSSet *hmbUnavailableProperties;
@property (retain, nonatomic) NSSet *hmbReadOnlyProperties;
@property (nonatomic) unsigned long long hmbRecordRow;
@property (nonatomic) _Bool hmbExternallyFetched;
@property (nonatomic, readonly) NSSet *hmbDependentUUIDs;
@property (nonatomic, readonly) NSString *hmbCanonicalType;
@property (nonatomic, readonly) NSSet *hmbSetProperties;
@property (nonatomic, readonly) HMFVersion *hmbContainerDataVersion;
@property (nonatomic, readonly) NSString *hmbDescription;
@property (nonatomic, readonly) _Bool hmbIsModelReadOnly;
@property (nonatomic, readonly) _Bool hmbIsModelGenericRepresentation;
@property (retain, nonatomic) HMFVersion *hmbIgnoredBefore;
@property (nonatomic, readonly) _Bool hmbIgnoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)properties;
+ (id)shortDescription;
+ (id)sort:(id)arg1;
+ (id)logCategory;
+ (id)hmbProperties;
+ (id)hmbExternalRecordType;
+ (id)hmbQueries;
+ (id)hmbMutableModelClassesWithQueries;
+ (Class)hmbGenericRepresentation;
+ (id)hmbReadOnlyBefore;
+ (id)hmbPropertyNames;
+ (_Bool)hmbShouldLogPrivateInformation;
+ (id)formattedStringForValue:(id)arg1;
+ (void)setHmbShouldLogPrivateInformation:(_Bool)arg1;
+ (id)hmbModelClassesWithQueries;
+ (void)hmbResetModelsWithQueries;
+ (id)hmbSchemaHashRoot;
+ (_Bool)propertyDiffersFrom:(id)arg1 to:(id)arg2;
+ (id)hmbExternalProperties;

- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (id)logIdentifier;
- (void)hmbAssociateWithContainer:(id)arg1;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)hmbMerge:(id)arg1 isFromCloud:(_Bool)arg2;
- (id)hmbPropertyNamed:(id)arg1;
- (void)hmbSetProperty:(id)arg1 named:(id)arg2;
- (_Bool)_validateType:(id)arg1 error:(id *)arg2;
- (id)hmbPrepareForStorageLocation:(unsigned long long)arg1;
- (id)validateType:(id)arg1 path:(id)arg2;
- (_Bool)hmbPropertyWasSet:(id)arg1;
- (_Bool)hmbPropertyIsReadOnly:(id)arg1;
- (id)hmbPropertyNamed:(id)arg1 isSet:(_Bool *)arg2;
- (void)dumpDebug:(id)arg1;
- (void)hmbUnsetPropertyNamed:(id)arg1;
- (id)hmbDefaultValueForPropertyNamed:(id)arg1;
- (_Bool)hmbPropertyIsAvailable:(id)arg1;
- (id)populateModelWithDictionary:(id)arg1 fromStorageLocation:(unsigned long long)arg2;
- (id)prepareForStorageLocation:(unsigned long long)arg1 using:(id)arg2 updatedModelIDs:(id)arg3 error:(id *)arg4;
- (_Bool)hmbValidForStorage:(id)arg1;
- (_Bool)hmbIsDifferentFromModel:(id)arg1 differingFields:(id *)arg2;
- (_Bool)hmbCanonicalTypeInferred;
- (_Bool)hmbPropertyIsExternal:(id)arg1;
- (void)dumpDebug;

@end
