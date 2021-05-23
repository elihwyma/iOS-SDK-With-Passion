/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitMessageCell

{
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *messageText;

- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;

@end
