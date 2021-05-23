/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIViewController, WFNetworkProfile, WFNetworkScanRecord;

@protocol WFNetworkView;

@interface WFCertificateContext : NSObject

{
    long long _requestedFields;
    NSArray *_certificateChain;
    struct __SecTrust *_certificateTrust;
    UIViewController<WFNetworkView> *_provider;
    CDUnknownBlockType _completionHandler;
    WFNetworkProfile *_profile;
    WFNetworkScanRecord *_network;
}

@property (retain, nonatomic) NSArray *certificateChain;
@property (nonatomic) struct __SecTrust *certificateTrust;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;

- (void)dealloc;
- (void)cancel;
- (void)accept;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 certificateChain:(id)arg3;
- (void)launchSettings;

@end
