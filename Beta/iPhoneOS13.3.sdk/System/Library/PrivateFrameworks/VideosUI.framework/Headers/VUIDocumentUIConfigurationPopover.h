/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@class UIBarButtonItem, UIView;

@interface VUIDocumentUIConfigurationPopover : VUIDocumentUIConfigurationModal

{
    _Bool _presentationAdjustedToSizeClass;
    unsigned long long _popOverArrowDirection;
    UIView *_sourceView;
    UIBarButtonItem *_popOverSourceBarButtonItem;
    struct CGSize _preferredSize;
    struct CGRect _sourceRect;
}

@property (nonatomic) struct CGSize preferredSize;
@property (nonatomic) struct CGRect sourceRect;
@property (nonatomic) unsigned long long popOverArrowDirection;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem;
@property (nonatomic, getter=isPresentationAdjustedToSizeClass) _Bool presentationAdjustedToSizeClass;

@end
