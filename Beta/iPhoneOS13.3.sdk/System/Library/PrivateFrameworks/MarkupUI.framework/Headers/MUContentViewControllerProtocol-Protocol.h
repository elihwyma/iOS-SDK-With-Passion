/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <MarkupUI/Swift-Protocol.h>

@class NSArray, UIScrollView;

@protocol MUContentViewControllerProtocol <Swift>

@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) long long defaultToolTag;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (nonatomic) _Bool showsThumbnailView;
@property (readonly) unsigned long long pageCount;
@property (nonatomic) _Bool navigationModeHorizontal;
@property (nonatomic) _Bool centersIgnoringContentInsets;

- (unsigned short)contentSize;
- (unsigned short)teardown;
- (unsigned short)visibleContentRect;
- (unsigned short)setup;
- (unsigned short)uninstallAllAnnotationControllerOverlays;
- (unsigned short)loadContentWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)idealContentSizeForScreenSize:windowDecorationSize: /* Error: Ran out of types for this method. */;
- (unsigned short)visibleContentRectInCoordinateSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)contentSnapshot;

@end
