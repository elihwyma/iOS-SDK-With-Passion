/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICellAccessory : NSObject

{
    UIView *_view;
    _Bool _alwaysNeedsLayout;
    NSString *_identifier;
}

@property (nonatomic, readonly) _Bool alwaysNeedsLayout;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) _Bool requestsHuggingLayoutWidth;

+ (id)accessoryWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
