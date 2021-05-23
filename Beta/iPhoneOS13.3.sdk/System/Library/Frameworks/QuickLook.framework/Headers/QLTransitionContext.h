/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class QLPreviewController, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface QLTransitionContext : NSObject

{
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    _Bool _contextPreparedToSend;
    _Bool _usingViewForZoomTransition;
    UIView *_sourceView;
    double _topNavigationOffset;
    double _hostNavigationOffset;
    UIView *_sourceViewSnapshot;
    struct CGSize _previewItemSize;
    struct CGRect _sourceFrame;
    struct CGRect _uncroppedFrame;
}

@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *sourceViewSnapshot;
@property struct CGRect sourceFrame;
@property struct CGRect uncroppedFrame;
@property double topNavigationOffset;
@property double hostNavigationOffset;
@property _Bool usingViewForZoomTransition;
@property struct CGSize previewItemSize;

+ (_Bool)supportsSecureCoding;
+ (_Bool)useZoomTransitionForPreviewController:(id)arg1;
+ (id)firstChildNavigationControllerFromViewController:(id)arg1;
+ (_Bool)useViewTransitionForPreviewController:(id)arg1;
+ (_Bool)useImageTransitionForPreviewController:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3;
- (void)prepareContextToSend;
- (void)_snapshotSourceViewIfNeeded;
- (id)sourceViewSnapshotImage;
- (void)setUpTransitionSourceView;

@end
