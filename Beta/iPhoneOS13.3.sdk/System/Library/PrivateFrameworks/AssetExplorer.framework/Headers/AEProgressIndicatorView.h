/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface AEProgressIndicatorView : PLRoundProgressView

{
    NSProgress *__progress;
}

@property (nonatomic, readonly) NSProgress *_progress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 progress:(id)arg2;

@end
