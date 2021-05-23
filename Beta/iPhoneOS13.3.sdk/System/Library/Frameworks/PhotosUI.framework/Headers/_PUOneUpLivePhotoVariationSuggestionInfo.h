/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSProgress, PXAssetVariationRenderProvider;

__attribute__((visibility("hidden")))
@interface _PUOneUpLivePhotoVariationSuggestionInfo : NSObject

{
    _Bool _didBeginRendering;
    _Bool _didAddRenderProgress;
    long long _variationType;
    PXAssetVariationRenderProvider *_renderProvider;
    NSProgress *_progress;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic) long long variationType;
@property (retain, nonatomic) PXAssetVariationRenderProvider *renderProvider;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) CDUnknownBlockType resultHandler;
@property (nonatomic) _Bool didBeginRendering;
@property (nonatomic) _Bool didAddRenderProgress;

@end
