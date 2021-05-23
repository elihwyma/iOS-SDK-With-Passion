/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CNSharingProfileRowItem : NSObject

{
    _Bool _isSelected;
    NSString *_label;
    UIView *_accessoryView;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic) _Bool isSelected;

- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2;

@end
