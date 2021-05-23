/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UIBarButtonItem, UIView;

@interface TVModalPresentationConfiguration : NSObject

{
    _Bool _allowsModalOverModal;
    _Bool _menuDismissable;
    _Bool _navigationBarHidden;
    _Bool _animated;
    long long _type;
    UIBarButtonItem *_popOverSourceBarButtonItem;
    UIView *_popOverSourceView;
    unsigned long long _popOverArrowDirection;
    NSArray *_alertActions;
    struct CGRect _popOverSourceRect;
}

@property (nonatomic) long long type;
@property (nonatomic) _Bool allowsModalOverModal;
@property (nonatomic, getter=isMenuDismissable) _Bool menuDismissable;
@property (nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden;
@property (nonatomic, getter=isAnimated) _Bool animated;
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem;
@property (retain, nonatomic) UIView *popOverSourceView;
@property (nonatomic) struct CGRect popOverSourceRect;
@property (nonatomic) unsigned long long popOverArrowDirection;
@property (retain, nonatomic) NSArray *alertActions;

+ (id)presentationTypeKeyMap;

- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)_applyAlertActionsForController:(id)arg1;

@end
