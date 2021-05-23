/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/DevicePINController.h>

@class NSString;

@protocol DevicePINControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCPINEntryViewController : DevicePINController

{
    id <DevicePINControllerDelegate> _delegate;
    unsigned long long _style;
}

@property (weak, nonatomic) id <DevicePINControllerDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)_updateStyle;
- (id)stringsBundle;
- (id)stringsTable;

@end
