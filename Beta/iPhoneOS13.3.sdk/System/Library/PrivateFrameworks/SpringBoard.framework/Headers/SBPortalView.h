/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CAPortalLayer;

@interface SBPortalView : UIView

{
    UIView *_sourceView;
}

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) _Bool hidesSourceView;
@property (nonatomic) _Bool matchesAlpha;
@property (nonatomic) _Bool matchesTransform;
@property (nonatomic) _Bool matchesPosition;
@property (nonatomic) _Bool allowsBackdropGroups;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (id)description;

@end
