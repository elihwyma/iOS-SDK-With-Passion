/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingRowItem : NSObject

{
    _Bool _isSelected;
    NSString *_label;
    UIView *_accessoryView;
    CDUnknownBlockType _confirmationHandler;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic) _Bool isSelected;
@property (copy, nonatomic, readonly) CDUnknownBlockType confirmationHandler;

- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2 confirmationHandler:(CDUnknownBlockType)arg3;

@end
