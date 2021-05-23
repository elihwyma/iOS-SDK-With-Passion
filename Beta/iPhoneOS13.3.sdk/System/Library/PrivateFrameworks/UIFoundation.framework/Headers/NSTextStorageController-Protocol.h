/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/Swift-Protocol.h>

@class NSTextStorage;

@protocol NSTextStorageController <Swift>

@property (retain) NSTextStorage *textStorage;

- (unsigned short)processEditingForTextStorage:edited:range:changeInLength:invalidatedRange: /* Error: Ran out of types for this method. */;
- (unsigned short)beginEditingTransaction;
- (unsigned short)endEditingTransaction;

@end
