/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/ReaderWriterExportController.h>

@class NSDictionary, PMTitleSubtitleView, UIImage;

@interface MiroExportController : ReaderWriterExportController

{
    NSDictionary *_titleInformation;
    UIImage *_posterImage;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressHandler;
    PMTitleSubtitleView *_titleView;
}

@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (copy, nonatomic) NSDictionary *titleInformation;
@property (retain, nonatomic) UIImage *posterImage;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)thumbnailImage;
- (id)titleLayerForVideoComposition:(id)arg1;
- (void)createMovieController;
- (void)_setupMovieController;
- (id)_compositionForExport;

@end
