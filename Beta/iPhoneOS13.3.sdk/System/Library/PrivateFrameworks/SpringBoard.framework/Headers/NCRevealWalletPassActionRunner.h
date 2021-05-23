/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBSCardItem;

@interface NCRevealWalletPassActionRunner : NSObject

{
    _Bool _shouldForwardAction;
    SBSCardItem *_cardItem;
    CDUnknownBlockType _pluginCompletionBlock;
}

@property (retain, nonatomic, readonly) SBSCardItem *cardItem;
@property (copy, nonatomic) CDUnknownBlockType pluginCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldForwardAction;

- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)willPresentLockScreenPlugin:(id)arg1;
- (void)didPresentLockScreenPlugin:(id)arg1;
- (void)willDismissLockScreenPlugin:(id)arg1;
- (void)didDismissLockScreenPlugin:(id)arg1;
- (id)initWithCardItem:(id)arg1;

@end
