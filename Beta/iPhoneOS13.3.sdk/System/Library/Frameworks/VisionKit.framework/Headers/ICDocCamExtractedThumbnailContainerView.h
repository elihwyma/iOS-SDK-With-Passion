/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamExtractedThumbnailContainerView : UIView

{
    id <ICDocCamExtractedThumbnailContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityCustomActions;
- (id)accessibilityElements;
- (_Bool)orderNextForAccessibility:(id)arg1;
- (_Bool)orderPreviousForAccessibility:(id)arg1;

@end
