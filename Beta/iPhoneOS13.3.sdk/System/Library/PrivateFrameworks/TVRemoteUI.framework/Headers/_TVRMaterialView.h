/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIView.h>

@class MTMaterialView;

@interface _TVRMaterialView : UIView

{
    MTMaterialView *_materialView;
}

@property (nonatomic) double weighting;

+ (id)seperatorMaterialView;
+ (id)backgroundMaterialViewWithWeighting:(double)arg1;
+ (id)trackpadMaterialView;

- (void)layoutSubviews;
- (id)initWithMaterialView:(id)arg1;
- (id)initWithDarkMaterialView;

@end
