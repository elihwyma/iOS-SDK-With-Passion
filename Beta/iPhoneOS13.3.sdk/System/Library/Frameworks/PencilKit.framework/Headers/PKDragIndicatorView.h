/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSString;

@interface PKDragIndicatorView : UIView

{
    unsigned long long _edgeLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
