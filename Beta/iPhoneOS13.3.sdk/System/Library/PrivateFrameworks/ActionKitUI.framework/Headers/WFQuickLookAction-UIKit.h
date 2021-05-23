/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFQuickLookAction.h>

@class NSString, QLPreviewController, WFContentCollection;

@interface WFQuickLookAction (UIKit)

@property (retain, nonatomic) WFContentCollection *dataSource;
@property (retain, nonatomic) QLPreviewController *previewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)previewControllerDidDismiss:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
