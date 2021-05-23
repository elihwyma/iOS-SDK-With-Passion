/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleViewOverlayRects : NSObject

{
    struct CGRect _backButtonRect;
    struct CGRect _leadingItemsRect;
    struct CGRect _titleRect;
    struct CGRect _trailingItemsRect;
}

@property (nonatomic) struct CGRect backButtonRect;
@property (nonatomic) struct CGRect leadingItemsRect;
@property (nonatomic) struct CGRect titleRect;
@property (nonatomic) struct CGRect trailingItemsRect;

- (id)init;
- (id)description;
- (void)reset;
- (id)asArray;

@end
