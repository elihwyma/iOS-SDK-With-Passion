/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UITextDropProposal, UITextPosition;

@protocol UIDropSession;

@protocol UITextDropRequest <Swift>

@property (nonatomic, readonly) UITextPosition *dropPosition;
@property (nonatomic, readonly) UITextDropProposal *suggestedProposal;
@property (nonatomic, readonly, getter=isSameView) _Bool sameView;
@property (nonatomic, readonly) id <UIDropSession> dropSession;

@end
