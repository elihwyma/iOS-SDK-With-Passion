/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSArray, NSString, UIImage;

@interface CNUIUserActionItemList : NSObject

{
    NSString *_type;
    UIImage *_icon;
    NSArray *_items;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *items;

- (id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3;

@end
