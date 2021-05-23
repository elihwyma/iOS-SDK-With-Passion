/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNPersonsModel.h>

@class NSString, VNPersonsModelData, VNPersonsModelFaceModel;

@interface VNMutablePersonsModel : VNPersonsModel

{
    VNPersonsModelData *_modelData;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedWriteVersions;
+ (id)configurationFromLoadedObjects:(id)arg1 error:(id *)arg2;
+ (id)_version1ModelWithObjects:(id)arg1 error:(id *)arg2;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;

- (_Bool)writeToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1;
- (void)personsModelDataWasModified:(id)arg1;
- (void)_modelWasModified;
- (id)_lastModificationDate;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;
- (_Bool)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (_Bool)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(id *)arg3;
- (_Bool)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (_Bool)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(id *)arg5;
- (_Bool)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;
- (_Bool)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 forVersion:(unsigned long long)arg3 readOnly:(_Bool)arg4;
- (_Bool)_getModelWritingImplementation:(CDUnknownFunctionPointerType *)arg1 selector:(SEL *)arg2 version:(unsigned long long *)arg3 forOptions:(id)arg4;
- (_Bool)writeToStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)dataWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;

@end
