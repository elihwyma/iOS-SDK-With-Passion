/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSAction, NSString, NSURL;

@protocol BCSActionPickerItemDelegate;

@interface BCSActionPickerItem : NSObject

{
    CDUnknownBlockType _actionHandler;
    BCSAction *_action;
    _Bool _copyActionItem;
    id <BCSActionPickerItemDelegate> _actionPickerItemDelegate;
    NSString *_label;
    NSURL *_actionURL;
    NSString *_targetApplicationBundleIdentifier;
}

@property (weak, nonatomic) id <BCSActionPickerItemDelegate> actionPickerItemDelegate;
@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) _Bool shouldDismissAlertWhenActionIsTaken;
@property (copy, nonatomic, readonly) NSURL *actionURL;
@property (copy, nonatomic, readonly) NSString *targetApplicationBundleIdentifier;
@property (nonatomic, readonly) long long dataType;
@property (copy, nonatomic, readonly) NSString *localizedDefaultActionDescription;
@property (nonatomic, readonly, getter=isCopyActionItem) _Bool copyActionItem;

+ (id)actionPickerItemWithLabel:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;

- (id)initWithAction:(id)arg1;
- (void)performAction;
- (void)didPerformAction;
- (id)initWithLabel:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLabel:(id)arg1 action:(id)arg2;

@end
