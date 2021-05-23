/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextPosition, UITextRangeImpl;

@interface UITextRange : NSObject

@property (nonatomic, readonly, getter=_isCaret) _Bool isCaret;
@property (nonatomic, readonly, getter=_isRanged) _Bool isRanged;
@property (nonatomic, readonly, getter=_isImpl) UITextRangeImpl *isImpl;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) UITextPosition *start;
@property (nonatomic, readonly) UITextPosition *end;

@end
