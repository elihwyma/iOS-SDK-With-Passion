/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGestureProvider.h>

@class NSArray, NSString, PXForYouSuggestionAssetsDataSourceManager, UILongPressGestureRecognizer;

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider

{
    NSArray *_gestureRecognizers;
    UILongPressGestureRecognizer *_longPressRecognizer;
    PXForYouSuggestionAssetsDataSourceManager *_dataSourceManager;
}

@property (nonatomic, readonly) PXForYouSuggestionAssetsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (void)_handleLongPress:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;
- (void)hostingViewDidChange;
- (void)_createGestureRecognizersIfNeeded;
- (void)_startShowingOriginal;
- (void)_stopShowingOriginal;

@end
