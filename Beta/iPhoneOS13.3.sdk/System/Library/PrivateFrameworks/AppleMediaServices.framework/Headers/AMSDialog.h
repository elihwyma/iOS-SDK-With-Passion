/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSImage, NSString;

@protocol OS_dispatch_queue;

@interface AMSDialog : NSObject

{
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
    NSArray *_buttons;
    CDUnknownBlockType _completionHandler;
    NSImage *_icon;
    NSString *_message;
    long long _selectedButtonIndex;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
}

@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long selectedButtonIndex;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;

- (void)present;
- (void)addButton:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
- (void)addTextField:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)presentSheetFromWindow:(id)arg1;
- (void)presentSystemDialog;

@end
