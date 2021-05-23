/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSURL, TSPObjectContext, TSUPathSet;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TSPDataManager : NSObject

{
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_datasQueue;
    long long _nextNewIdentifier;
    struct unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak>>> _identifierToDataMap;
    struct unordered_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>>> _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    NSURL *_lastDocumentURL;
    NSURL *_temporaryDirectoryURL;
    NSURL *_temporaryUniqueDirectoryURL;
    TSUPathSet *_temporaryPathSet;
    _Bool _hasExternalReferences;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}

@property (weak, nonatomic, readonly) TSPObjectContext *context;

+ (void)readWithChannel:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)stringForDigest:(const array_019f9a10 *)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)addData:(id)arg1;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeFileAtPath:(id)arg1;
- (void)didCloseDocument;
- (id)checkForPersistenceWarningsWithPackageURL:(id)arg1;
- (void)removeExternalReferences;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (void)removeTemporaryDirectory;
- (id)dataFromFileURL:(id)arg1 useFileCoordination:(_Bool)arg2;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2;
- (void)coordinateReadingNewFileURL:(id)arg1 byAccessor:(CDUnknownBlockType)arg2;
- (id)temporaryPathForFilename:(id)arg1;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 temporaryPath:(id)arg3;
- (_Bool)linkTemporaryPath:(id)arg1 fromURL:(id)arg2;
- (id)dataForExistingData:(id)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3 temporaryPath:(id)arg4;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 readHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 temporaryPath:(id)arg3 shouldWriteIfFound:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)addNewDataForStorage:(id)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3;
- (int)openTemporaryPath:(id)arg1;
- (id)dataForDigestImpl:(const array_019f9a10 *)arg1 accessorBlock:(CDUnknownBlockType)arg2;
- (id)dataWithTemporaryPath:(id)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3;
- (id)dataWithStorage:(id)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3 skipDocumentResourcesLookup:(_Bool)arg4 accessorBlock:(CDUnknownBlockType)arg5;
- (id)dataForIdentifierImpl:(long long)arg1;
- (id)createTemporaryDirectoryForPackageURL:(id)arg1;
- (void)waitForRemoveExternalReferencesToComplete;
- (void)removeExternalReferenceForData:(id)arg1 storage:(id)arg2;
- (id)dataForDigestImpl:(const array_019f9a10 *)arg1 skipDocumentResourcesLookup:(_Bool)arg2 accessorBlock:(CDUnknownBlockType)arg3;
- (id)dataFromURL:(id)arg1 useFileCoordination:(_Bool)arg2;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)dataFromNSData:(id)arg1 filename:(id)arg2;
- (id)documentResourceDataWithStorage:(id)arg1 digestString:(id)arg2 filename:(id)arg3;
- (id)copyData:(id)arg1;
- (id)dataForIdentifier:(long long)arg1;
- (id)dataFromExternalReferenceURL:(id)arg1 useFileCoordination:(_Bool)arg2;
- (id)dataForDigest:(const array_019f9a10 *)arg1;
- (void)dataForDigest:(const array_019f9a10 *)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
