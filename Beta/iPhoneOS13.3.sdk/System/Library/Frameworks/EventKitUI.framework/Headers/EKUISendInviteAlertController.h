/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController;

@interface EKUISendInviteAlertController : NSObject

{
    CDUnknownBlockType _completionHandler;
    UIAlertController *_alertController;
    EKUISendInviteAlertController *_strongSelf;
}

@property (copy) CDUnknownBlockType completionHandler;
@property (retain) UIAlertController *alertController;
@property (retain) EKUISendInviteAlertController *strongSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)_cleanup;
- (void)cancelAnimated:(_Bool)arg1;
- (void)_completeWithSelection:(int)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (_Bool)_useSheetForViewController:(id)arg1;

@end
