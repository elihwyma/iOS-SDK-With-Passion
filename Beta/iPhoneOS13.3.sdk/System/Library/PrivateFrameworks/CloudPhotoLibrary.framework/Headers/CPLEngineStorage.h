/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineStore, CPLPlatformObject, NSString;

@interface CPLEngineStorage : NSObject

{
    _Bool _superWasCalled;
    CPLPlatformObject *_platformObject;
    CPLEngineStore *_engineStore;
    NSString *_name;
}

@property (nonatomic, readonly) CPLEngineStore *engineStore;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long scopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;

- (id)redactedDescription;
- (id)status;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (id)statusDictionary;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)statusPerScopeIndex;
- (_Bool)_checkSuperWasCalled;

@end
