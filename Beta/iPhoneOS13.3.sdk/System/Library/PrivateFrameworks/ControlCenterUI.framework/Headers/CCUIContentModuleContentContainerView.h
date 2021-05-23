/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIView.h>

@class MTMaterialView, NSString;

@interface CCUIContentModuleContentContainerView : UIView

{
    _Bool _expanded;
    _Bool _moduleProvidesOwnPlatter;
    _Bool _clipsContentInCompactMode;
    MTMaterialView *_moduleMaterialView;
    NSString *_materialViewGroupName;
    double _compactContinuousCornerRadius;
    double _expandedContinuousCornerRadius;
}

@property (nonatomic) _Bool moduleProvidesOwnPlatter;
@property (nonatomic, readonly) MTMaterialView *moduleMaterialView;
@property (copy, nonatomic) NSString *materialViewGroupName;
@property (nonatomic) _Bool clipsContentInCompactMode;
@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic) double expandedContinuousCornerRadius;

- (id)init;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_transitionToExpandedMode:(_Bool)arg1 force:(_Bool)arg2;
- (void)_configureModuleMaterialViewIfNecessary;
- (_Bool)_isContentClippingRequiredForSubview:(id)arg1;
- (void)transitionToExpandedMode:(_Bool)arg1;

@end
