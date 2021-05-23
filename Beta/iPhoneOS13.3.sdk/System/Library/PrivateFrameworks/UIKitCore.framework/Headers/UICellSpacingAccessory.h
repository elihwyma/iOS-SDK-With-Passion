/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICellAccessory.h>

__attribute__((visibility("hidden")))
@interface UICellSpacingAccessory : UICellAccessory

{
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;

+ (id)accessoryWithIdentifier:(id)arg1 size:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)view;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
