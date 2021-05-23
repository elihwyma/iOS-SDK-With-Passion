/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NWPathEvaluator, WFInterface, WFNetworkProfile, WFNetworkScanRecord;

@protocol WFHealthManagerDelegate;

@interface WFHealthManager : NSObject

{
    NSSet *_currentNetworkIssues;
    id <WFHealthManagerDelegate> _delegate;
    WFInterface *_interface;
    NWPathEvaluator *_evaluator;
    WFNetworkScanRecord *_network;
    WFNetworkProfile *_profile;
}

@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (nonatomic, readonly) _Bool currentNetworkHasNoInternetConnection;
@property (weak, nonatomic) id <WFHealthManagerDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithInterface:(id)arg1;
- (void)currentNetworkDidChange:(id)arg1;
- (void)linkQualityDidChange:(id)arg1;
- (void)_updateCurrentNetworkIssues;

@end
