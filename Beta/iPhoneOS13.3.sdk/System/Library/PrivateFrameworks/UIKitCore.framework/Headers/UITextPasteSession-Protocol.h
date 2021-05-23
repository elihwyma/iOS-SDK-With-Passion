/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSAttributedString, UITextRange;

@protocol UITextPasteSessionDelegate;

@protocol UITextPasteSession <Swift>

@property (nonatomic, readonly) UITextRange *range;
@property (nonatomic, readonly) NSAttributedString *pasteResult;
@property (weak, nonatomic) id <UITextPasteSessionDelegate> delegate;
@property (copy, nonatomic) NSArray *originalItems;

- (unsigned short)animationCompleted;
- (unsigned short)positionedPasteResult;
- (unsigned short)animationStarted;

@end
