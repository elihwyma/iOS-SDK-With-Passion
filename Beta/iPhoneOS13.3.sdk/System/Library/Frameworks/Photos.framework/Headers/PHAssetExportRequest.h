/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSProgress, NSString, NSURL, PHAsset;

@protocol PHAssetExportRequestDelegate;

@interface PHAssetExportRequest : NSObject

{
    NSURL *_outputDirectory;
    PHAsset *_asset;
    NSProgress *_progress;
    unsigned long long _state;
    id <PHAssetExportRequestDelegate> _delegate;
    NSDictionary *_variants;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) unsigned long long state;
@property (weak, nonatomic) id <PHAssetExportRequestDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *variants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;
+ (id)assetExportLog;

- (id)init;
- (void)setState:(unsigned long long)arg1;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (id)outputDirectory;
- (void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
