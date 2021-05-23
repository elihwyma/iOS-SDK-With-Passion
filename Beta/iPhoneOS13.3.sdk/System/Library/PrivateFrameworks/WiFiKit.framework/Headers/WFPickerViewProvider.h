/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSString, UIViewController;

@protocol WFPickerViewProviderDelegate;

@interface WFPickerViewProvider : NSObject <Swift>

{
    _Bool wantsModalPresentation;
    id <WFPickerViewProviderDelegate> _delegate;
    UIViewController *_rootViewController;
}

@property (retain, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id <WFPickerViewProviderDelegate> delegate;
@property (nonatomic, readonly) _Bool wantsModalPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRootViewController:(id)arg1;
- (void)presentNetworkViewController:(id)arg1 forContext:(id)arg2;
- (id)credentialsViewControllerWithContext:(id)arg1;
- (id)certificateViewControllerWithContext:(id)arg1;
- (id)networkErrorViewControllerWithContext:(id)arg1;
- (id)otherNetworkViewControllerWithContext:(id)arg1;
- (id)networkDetailsViewControllerWithContext:(id)arg1;
- (void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2;
- (_Bool)_canHandleCredentialsContext:(id)arg1;
- (id)_promptForEnterpriseJoin:(id)arg1;

@end
