/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, NSMutableArray, NSString, _UIBannerContent, _UIBannerManager, _UIBannerView;

__attribute__((visibility("hidden")))
@interface _UIBanner : NSObject

{
    _UIBannerView *_view;
    _UIBannerContent *_content;
    _UIBannerManager *_manager;
    NSLayoutConstraint *_visibleConstraint;
    NSLayoutConstraint *_hiddenConstraint;
    long long _state;
    NSMutableArray *_dismissalAnimations;
    NSMutableArray *_dismissalCompletionHandlers;
    NSMutableArray *_tapHandlers;
}

@property (retain, nonatomic) _UIBannerView *view;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableArray *dismissalAnimations;
@property (retain, nonatomic) NSMutableArray *dismissalCompletionHandlers;
@property (retain, nonatomic) NSMutableArray *tapHandlers;
@property (retain, nonatomic) _UIBannerContent *content;
@property (weak, nonatomic) _UIBannerManager *manager;
@property (retain, nonatomic) NSLayoutConstraint *visibleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *hiddenConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismiss;
- (void)present;
- (void)addTapHandler:(CDUnknownBlockType)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)addDismissalAnimations:(CDUnknownBlockType)arg1;
- (void)addDismissalCompletionHandler:(CDUnknownBlockType)arg1;

@end
