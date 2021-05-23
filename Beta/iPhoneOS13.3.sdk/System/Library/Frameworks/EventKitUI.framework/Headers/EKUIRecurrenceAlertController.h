/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController;

@interface EKUIRecurrenceAlertController : NSObject

{
    UIAlertController *_alertController;
    CDUnknownBlockType _completionHandler;
}

@property (copy) CDUnknownBlockType completionHandler;
@property (retain) UIAlertController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 forEvent:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (int)_determineChoicesForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (id)_cancelLocalizedString;
+ (id)_detachAllLocalizedString;
+ (id)_detachFutureLocalizedString;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 stringForDeleteButton:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 forEvent:(id)arg5 stringForDeleteButton:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
+ (id)deleteAlertWithOptions:(unsigned long long)arg1 forEvent:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (id)presentAttachmentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

- (void)dealloc;
- (void)_cleanup;
- (void)cancelAnimated:(_Bool)arg1;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 stringForDeleteButton:(id)arg7;
- (void)setupDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4;
- (void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6;
- (void)_presentAttachmentsAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4;
- (_Bool)_useSheetForViewController:(id)arg1 options:(unsigned long long)arg2;
- (void)_completeWithSelection:(int)arg1;
- (void)_configureAlertControllerWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2 barButtonItem:(id)arg3;

@end
