/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIBarButtonItem, UIView;

@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject

{
    id <SKUIModalSourceViewProviderDelegate> _delegate;
    _Bool _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
    UIView *_sourceView;
}

@property (weak, nonatomic) id <SKUIModalSourceViewProviderDelegate> delegate;
@property (retain, nonatomic) UIView *originalSourceView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *sourceButtonBarItem;
@property (retain, nonatomic) id userInfo;

- (id)animationView;
- (void)hideOriginalSourceView;
- (void)showOriginalSourceView;

@end
