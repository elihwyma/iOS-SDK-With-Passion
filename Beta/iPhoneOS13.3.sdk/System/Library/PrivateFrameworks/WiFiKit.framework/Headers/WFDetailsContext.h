/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIViewController, WFDiagnosticsContext, WFIPMonitor, WFKnownNetworkStore, WFNetworkProfile, WFNetworkScanRecord;

@protocol WFNetworkView;

@interface WFDetailsContext : NSObject

{
    _Bool _autoJoinEnabled;
    _Bool _autoLoginEnabled;
    _Bool _isInSaveDataMode;
    _Bool _diagnosable;
    _Bool _current;
    _Bool _supportsAirportManagement;
    _Bool _knownNetwork;
    UIViewController<WFNetworkView> *_provider;
    CDUnknownBlockType _actionHandler;
    NSArray *_recommendations;
    WFNetworkProfile *_profile;
    WFIPMonitor *_ipMonitor;
    WFNetworkScanRecord *_network;
    long long _requestedFields;
    WFKnownNetworkStore *_knownNetworkStore;
    WFDiagnosticsContext *_diagnosticsContext;
}

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore;
@property (nonatomic, getter=isKnownNetwork) _Bool knownNetwork;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) WFDiagnosticsContext *diagnosticsContext;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (retain, nonatomic) NSArray *recommendations;
@property _Bool diagnosable;
@property (nonatomic, getter=isCurrent) _Bool current;
@property (nonatomic) _Bool supportsAirportManagement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool autoJoinEnabled;
@property (nonatomic) _Bool autoLoginEnabled;
@property (nonatomic) _Bool isInSaveDataMode;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;

- (void)dealloc;
- (void)cancel;
- (void)join;
- (void)manage;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 knownNetworkStore:(id)arg3 ipMonitor:(id)arg4;
- (void)renewLease;
- (void)forget;
- (void)openRecommendationLink;

@end
