/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSArray, NSData, NSString, UINavigationController, UIViewController, WFNetworkScanRecord, WFOtherNetworkViewController;

@interface WFWAPICertificatePromptOperation : WFOperation

{
    _Bool _userCancelled;
    struct __SecIdentity *_WAPIRootCertificate;
    NSData *_WAPIIdentityPEMBlob;
    UIViewController *_rootViewController;
    WFNetworkScanRecord *_network;
    WFOtherNetworkViewController *_promptViewController;
    UINavigationController *_navigationController;
    NSArray *_wapiIdentityMapping;
}

@property (nonatomic) _Bool userCancelled;
@property (nonatomic) struct __SecIdentity *WAPIRootCertificate;
@property (retain, nonatomic) NSData *WAPIIdentityPEMBlob;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFOtherNetworkViewController *promptViewController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *wapiIdentityMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)finish;
- (id)initWithRootViewController:(id)arg1 network:(id)arg2;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (_Bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;

@end
