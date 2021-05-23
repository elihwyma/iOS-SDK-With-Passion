/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <UIAlertController.h>

@class NSString, UITableView, WebUIAlert;

@interface WBUAlertController : UIAlertController

{
    WebUIAlert *_alert;
    _Bool _automaticallyDismiss;
    UITableView *_tableView;
    CDUnknownBlockType _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithAlert:(id)arg1 automaticallyDismiss:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setUpAlert;

@end
