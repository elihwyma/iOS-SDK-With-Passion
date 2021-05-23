/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString, NSUUID, UITextInputMode;

@protocol UITextDocumentProxy <Swift>

@property (nonatomic, readonly) NSString *documentContextBeforeInput;
@property (nonatomic, readonly) NSString *documentContextAfterInput;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) UITextInputMode *documentInputMode;
@property (copy, nonatomic, readonly) NSUUID *documentIdentifier;

- (unsigned short)unmarkText;
- (unsigned short)setMarkedText:selectedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)adjustTextPositionByCharacterOffset: /* Error: Ran out of types for this method. */;

@end
