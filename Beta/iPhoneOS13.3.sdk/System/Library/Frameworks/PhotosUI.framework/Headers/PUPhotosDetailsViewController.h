/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

@class NSString, _UIContentUnavailableView;

@protocol PUAccessoryContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController

{
    struct {
        _Bool scrollViewControllerDidScroll;
        _Bool scrollViewControllerContentBoundsDidChange;
    } _superRespondsTo;
    _UIContentUnavailableView *_contentUnavailableView;
    id <PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) struct CGSize minimumContentSize;

- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (void)setEmpty:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (_Bool)_canShowWhileLocked;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (unsigned long long)occludedContentEdges;
- (struct UIEdgeInsets)px_safeAreaInsets;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)contentBoundsInCoordinateSpace:(id)arg1;
- (void)_layoutContentUnavailableView;

@end
