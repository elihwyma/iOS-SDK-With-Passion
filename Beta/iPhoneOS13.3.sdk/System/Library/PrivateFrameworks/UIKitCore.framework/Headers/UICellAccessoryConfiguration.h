/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject

{
    _Bool _leadingAlwaysNeedsLayout;
    _Bool _trailingAlwaysNeedsLayout;
    NSArray *_leadingAccessories;
    NSArray *_trailingAccessories;
}

@property (copy, nonatomic) NSArray *leadingAccessories;
@property (copy, nonatomic) NSArray *trailingAccessories;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)alwaysNeedsLayout;

@end
