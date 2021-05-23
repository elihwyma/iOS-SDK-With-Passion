/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface HUCAPackageIconContentView : HUIconContentView

{
    CAStateController *_stateController;
    CALayer *_rootLayer;
    NSMutableArray *_packageLayers;
    NSString *_stateName;
    struct CGSize _assetSize;
}

@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSMutableArray *packageLayers;
@property (nonatomic) struct CGSize assetSize;
@property (retain, nonatomic) NSString *stateName;

- (void)setState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)setState:(id)arg1 animated:(_Bool)arg2;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_updatePackage;
- (void)_updateStateAnimated:(_Bool)arg1;
- (void)_updateForRTL:(_Bool)arg1;
- (void)_applyModifiers;

@end
