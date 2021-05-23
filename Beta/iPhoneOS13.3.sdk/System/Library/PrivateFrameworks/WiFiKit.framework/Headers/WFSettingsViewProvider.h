/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, WFSettingsController;

@interface WFSettingsViewProvider : NSObject

{
    NSMapTable *_credentialsViewControllerMap;
    WFSettingsController *_settingsController;
}

@property (retain, nonatomic) NSMapTable *credentialsViewControllerMap;
@property (retain, nonatomic) WFSettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)credentialsViewControllerWithContext:(id)arg1;
- (id)certificateViewControllerWithContext:(id)arg1;
- (id)networkErrorViewControllerWithContext:(id)arg1;
- (id)otherNetworkViewControllerWithContext:(id)arg1;
- (id)networkDetailsViewControllerWithContext:(id)arg1;
- (void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2;

@end
