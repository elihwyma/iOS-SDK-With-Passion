/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUAssetReference, PUDisplayTileTransform, PUUserTransformView;

@protocol PUUserTransformTileViewControllerDelegate;

@interface PUUserTransformTileViewController : PUTileViewController

{
    struct {
        _Bool respondsToDidChangeModelTileTransform;
        _Bool respondsToDidChangeIsUserInteracting;
        _Bool respondsToShouldReceiveTouchAtLocationFromProvider;
    } _delegateFlags;
    _Bool _userInteractionEnabled;
    id <PUUserTransformTileViewControllerDelegate> _delegate;
    PUAssetReference *_assetReference;
    PUUserTransformView *_userTransformView;
    PUDisplayTileTransform *_displayTileTransform;
    NSString *__identifier;
    struct CGRect __untransformedContentFrame;
}

@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView;
@property (nonatomic, setter=_setUntransformedContentFrame:) struct CGRect _untransformedContentFrame;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform;
@property (weak, nonatomic) id <PUUserTransformTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (nonatomic, setter=setUserInteractionEnabled:) _Bool userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)loadView;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)becomeReusable;
- (void)applyLayoutInfo:(id)arg1;
- (id)_userInputOriginIdentifier;
- (void)didChangeAnimating;
- (_Bool)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(struct CGPoint)arg2;
- (void)userTransformView:(id)arg1 didChangeIsUserInteracting:(_Bool)arg2;
- (void)userTransformView:(id)arg1 didChangeUserAffineTransform:(struct CGAffineTransform)arg2 isUserInteracting:(_Bool)arg3;
- (void)_updateUserTransformView;
- (void)_updateUserTransformPadding;
- (void)_updateUserInteractionEnabled;

@end
