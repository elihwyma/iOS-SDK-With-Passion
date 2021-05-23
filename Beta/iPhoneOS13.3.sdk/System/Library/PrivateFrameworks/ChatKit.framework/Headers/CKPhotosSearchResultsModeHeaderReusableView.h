/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UISegmentedControl;

@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView

{
    UISegmentedControl *_control;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UISegmentedControl *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_controlIndexDidChange:(id)arg1;

@end
