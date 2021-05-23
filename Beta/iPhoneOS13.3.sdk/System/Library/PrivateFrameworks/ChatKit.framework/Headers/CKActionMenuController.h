/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKActionMenuView, NSArray;

@protocol CKActionMenuControllerDelegate;

@interface CKActionMenuController : NSObject

{
    unsigned long long _defaultActionIndex;
    id <CKActionMenuControllerDelegate> _delegate;
    NSArray *_passthroughViews;
    CKActionMenuView *_actionMenuView;
}

@property (retain, nonatomic) CKActionMenuView *actionMenuView;
@property (copy, nonatomic, readonly) NSArray *actionMenuItems;
@property (nonatomic, readonly) unsigned long long defaultActionIndex;
@property (weak, nonatomic) id <CKActionMenuControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic, readonly, getter=isActionMenuVisible) _Bool actionMenuVisible;

- (void)dealloc;
- (void)dismissActionMenuAnimated:(_Bool)arg1;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3;
- (void)presentActionMenuFromPoint:(struct CGPoint)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (struct CGRect)convertActionMenuFrameToView:(id)arg1;

@end
