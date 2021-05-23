/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UITextDropSupporting <Swift>

@property (nonatomic) struct CGPoint contentOffsetForSameViewDrops;

- (unsigned short)allowsEditingTextAttributes;
- (unsigned short)canBecomeDropResponder;
- (unsigned short)becomeDropResponder;
- (unsigned short)resignDropResponderWithDropPerformed: /* Error: Ran out of types for this method. */;
- (unsigned short)droppingStarted;
- (unsigned short)droppingFinished;

@end
