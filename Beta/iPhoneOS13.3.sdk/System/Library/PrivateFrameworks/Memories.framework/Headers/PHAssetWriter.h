/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSURL, PHAssetRepresentation;

__attribute__((visibility("hidden")))
@interface PHAssetWriter : NSObject

{
    _Bool _networkAccessAllowed;
    _Bool _stop;
    PHAssetRepresentation *_assetRepresentation;
    NSURL *_destinationURL;
    NSURL *_sourceUrl;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) PHAssetRepresentation *assetRepresentation;
@property (retain, nonatomic) NSURL *sourceUrl;
@property _Bool stop;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) _Bool networkAccessAllowed;

+ (id)assetWriterForIdentifierURL:(id)arg1;
+ (id)assetWriterForAssetRepresentation:(id)arg1;

- (id)request;
- (id)write;
- (id)initWithSourceURL:(id)arg1;
- (id)transfer;
- (id)initWithAssetRepresentation:(id)arg1;
- (unsigned long long)estimatedOutputSizeWithError:(id *)arg1;
- (void)startWritingWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopWriting;

@end
