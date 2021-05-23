/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder;

@interface UIKBTextEditingTraits : NSObject

{
    _Bool _canToggleBoldface;
    _Bool _canToggleItalics;
    _Bool _canToggleUnderline;
    _Bool _supportStyling;
    _Bool _canCut;
    _Bool _canCopy;
    _Bool _canPaste;
    _Bool _canMoveCursorLeft;
    _Bool _canMoveCursorRight;
    _Bool _isBold;
    _Bool _isItalicized;
    _Bool _isUnderlined;
    UIResponder *_firstResponder;
    UIResponder *_actionResponder;
}

@property (nonatomic, readonly) _Bool isBold;
@property (nonatomic, readonly) _Bool isItalicized;
@property (nonatomic, readonly) _Bool isUnderlined;
@property (nonatomic, readonly) _Bool canToggleBoldface;
@property (nonatomic, readonly) _Bool canToggleItalics;
@property (nonatomic, readonly) _Bool canToggleUnderline;
@property (nonatomic, readonly) _Bool supportStyling;
@property (nonatomic) _Bool canCut;
@property (nonatomic, readonly) _Bool canCopy;
@property (nonatomic, readonly) _Bool canPaste;
@property (nonatomic, readonly) _Bool canMoveCursorLeft;
@property (nonatomic, readonly) _Bool canMoveCursorRight;
@property (weak, nonatomic, readonly) UIResponder *firstResponder;
@property (weak, nonatomic, readonly) UIResponder *actionResponder;

+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;
+ (id)traitsForEditingInteractionWithFirstResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3;

- (id)initWithResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3 sender:(id)arg4;

@end
