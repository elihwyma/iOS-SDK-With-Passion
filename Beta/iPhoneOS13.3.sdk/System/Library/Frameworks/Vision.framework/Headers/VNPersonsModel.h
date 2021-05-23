/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNPersonsModelConfiguration, VNPersonsModelFaceModel;

@protocol VNPersonsModelDataSource;

@interface VNPersonsModel : NSObject

{
    VNPersonsModelConfiguration *_configuration;
    id <VNPersonsModelDataSource> _dataSource;
    unsigned long long _lastDataChangeSequenceNumber;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (copy, nonatomic, readonly) VNPersonsModelConfiguration *configuration;

+ (id)configurationFromLoadedObjects:(id)arg1 error:(id *)arg2;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;
+ (Class)_modelClassForKind:(unsigned int)arg1 error:(id *)arg2;
+ (id)versionNumbersEncodedInClass:(Class)arg1 withMethodNamePrefix:(id)arg2 suffix:(id)arg3;
+ (id)supportedReadVersions;
+ (id)_readModelObjectsFromStream:(id)arg1 options:(id)arg2 actionBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 modelClass:(Class *)arg5 version:(unsigned long long *)arg6 error:(id *)arg7;
+ (id)_modelFromStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)modelFromStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)_modelFromUnopenedStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)modelFromData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)modelFromURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)_modelInformationFromUnopenedStream:(id)arg1 error:(id *)arg2;
+ (id)informationForModelWithData:(id)arg1 error:(id *)arg2;
+ (id)informationForModelWithURL:(id)arg1 error:(id *)arg2;
+ (_Bool)readObjectForVersion1Tag:(unsigned int)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(id *)arg5;

- (id)description;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 dataSource:(id)arg2;
- (_Bool)updateInternalConfigurationWithModelFaceprintRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)predictPersonFromFaceObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceCountsForAllPersons;

@end
