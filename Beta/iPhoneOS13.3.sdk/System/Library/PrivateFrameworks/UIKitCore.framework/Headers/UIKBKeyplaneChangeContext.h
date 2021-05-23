/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneChangeContext : NSObject

{
    _Bool _sizeDidChange;
    _Bool _splitWidthsChanged;
    _Bool _selfSizingChanged;
    _Bool _updateAssistantView;
    _Bool _isSecureTextEntry;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic, readonly) _Bool sizeDidChange;
@property (nonatomic) _Bool splitWidthsChanged;
@property (nonatomic) _Bool selfSizingChanged;
@property (nonatomic) _Bool updateAssistantView;
@property (nonatomic) _Bool isSecureTextEntry;

+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:(struct CGSize)arg1;

@end
