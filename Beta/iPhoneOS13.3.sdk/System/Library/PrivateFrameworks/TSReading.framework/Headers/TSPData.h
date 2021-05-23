/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSPDataManager, TSPObjectContext;

@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject

{
    int _didCull;
    long long _identifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    array_019f9a10 _digest;
    _Bool _isDeallocating;
}

@property (nonatomic, readonly) long long identifier;
@property (retain, nonatomic) id <TSPDataStorage> storage;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isReadable;
@property (nonatomic, readonly) _Bool isApplicationData;
@property (nonatomic, readonly) _Bool isExternalData;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, readonly) _Bool needsDownload;
@property (nonatomic, readonly) unsigned long long encodedLength;

+ (id)null;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 context:(id)arg4;
+ (id)cullingListenersQueue;
+ (id)cullingListeners;
+ (id)requiredAVAssetOptions;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromURL:(id)arg1 context:(id)arg2;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2;
+ (void)addCullingListener:(id)arg1;
+ (void)removeCullingListener:(id)arg1;
+ (_Bool)updateDigest:(array_019f9a10 *)arg1 withProtobufString:(const basic_string_7c0a1c0b *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)preferredFilename;
- (id)bookmarkData;
- (const array_019f9a10 *)digest;
- (struct CGImage *)newCGImage;
- (id)copyWithContext:(id)arg1;
- (void)willCull;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)setFilename:(id)arg1 storage:(id)arg2;
- (id)initWithIdentifier:(long long)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (id)AVAssetWithOptions:(id)arg1;
- (_Bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
- (id)NSData;
- (id)AVAsset;
- (void)performInputStreamReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)addDownloadObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isStorageInPackage:(id)arg1;

@end
