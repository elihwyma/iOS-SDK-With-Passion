/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXExtendedTraitCollection;

@interface PXCuratedLibraryStyleGuide : PXObservable <Swift>

{
    double _lateralMargin;
    long long _secondaryToolbarPlacement;
    long long _toggleAspectFitButtonPlacement;
    long long _zoomButtonsButtonPlacement;
    PXExtendedTraitCollection *_extendedTraitCollection;
    long long _buttonStyle;
    struct CGSize _secondaryToolbarSize;
    struct UIEdgeInsets _secondaryToolbarPadding;
    struct UIEdgeInsets _secondaryToolbarContentInsets;
}

@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) double lateralMargin;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long secondaryToolbarPlacement;
@property (nonatomic) struct CGSize secondaryToolbarSize;
@property (nonatomic) struct UIEdgeInsets secondaryToolbarContentInsets;
@property (nonatomic) long long toggleAspectFitButtonPlacement;
@property (nonatomic) long long zoomButtonsButtonPlacement;
@property (nonatomic, readonly) struct UIEdgeInsets secondaryToolbarPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_invalidate;
- (void)_update;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1;

@end
