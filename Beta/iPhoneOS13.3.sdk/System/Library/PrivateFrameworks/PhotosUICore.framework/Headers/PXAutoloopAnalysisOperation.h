/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSNumber, NSProgress, PLLivePhotoEditSource;

@interface PXAutoloopAnalysisOperation : NSOperation

{
    NSDictionary *_recipesByVariationType;
    _Bool _succeeded;
    PLLivePhotoEditSource *_editSource;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    NSDictionary *_analysisResult;
}

@property (nonatomic, readonly) PLLivePhotoEditSource *editSource;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool succeeded;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSDictionary *analysisResult;

- (id)init;
- (void)cancel;
- (void)main;
- (void)_timeout;
- (id)initWithEditSource:(id)arg1;
- (id)recipeForVariationType:(long long)arg1;

@end
