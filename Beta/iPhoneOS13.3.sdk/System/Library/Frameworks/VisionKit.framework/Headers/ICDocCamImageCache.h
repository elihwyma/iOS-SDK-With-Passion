/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class DCLRUCache, NSMutableDictionary, NSURL;

@protocol DCDataCryptorDelegate, OS_dispatch_queue;

@interface ICDocCamImageCache : NSObject

{
    id <DCDataCryptorDelegate> _dataCryptorDelegate;
    NSURL *_cachesDirectoryURL;
    NSURL *_docCamImageDirectoryURL;
    NSObject<OS_dispatch_queue> *_imageCacheQueue;
    DCLRUCache *_inMemoryImageCache;
    NSMutableDictionary *_imageSizeCache;
}

@property (nonatomic, readonly) NSURL *cachesDirectoryURL;
@property (nonatomic, readonly) NSURL *docCamImageDirectoryURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue;
@property (retain, nonatomic) DCLRUCache *inMemoryImageCache;
@property (retain, nonatomic) NSMutableDictionary *imageSizeCache;
@property (retain, nonatomic) id <DCDataCryptorDelegate> dataCryptorDelegate;

- (id)init;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)clearInMemoryCache;
- (id)getImageURL:(id)arg1 async:(_Bool)arg2;
- (struct CGSize)getImageSize:(id)arg1;
- (id)getImage:(id)arg1;
- (id)setImage:(id)arg1 metaData:(id)arg2;
- (_Bool)replaceImage:(id)arg1 metaData:(id)arg2 uuid:(id)arg3;
- (id)setImage:(id)arg1 metaData:(id)arg2 addToMemoryCache:(_Bool)arg3;
- (_Bool)deleteImage:(id)arg1;
- (id)initWithDataCryptorDelegate:(id)arg1;
- (_Bool)deleteAllImages;
- (id)initWithDataCryptorDelegate:(id)arg1 cachesDirectoryURL:(id)arg2;
- (_Bool)makeSureScanDirectoryExists:(id *)arg1;
- (id)getImageURL:(id)arg1;
- (id)createNSDataFrom:(id)arg1 metaData:(id)arg2;

@end
