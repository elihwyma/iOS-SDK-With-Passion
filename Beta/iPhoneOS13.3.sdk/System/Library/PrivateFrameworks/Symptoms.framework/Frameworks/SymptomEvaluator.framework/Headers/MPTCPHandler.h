/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString, NetworkAnalyticsStateRelay;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPTCPHandler : NSObject

{
    int _kernelWifiAdvice;
    int _kernelCellAdvice;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    id relayReadyObserver;
    id rnfWiFiObserver;
    int _sockfd;
    NSObject<OS_dispatch_source> *_socksrc;
}

@property int sockfd;
@property (retain) NSObject<OS_dispatch_source> *socksrc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendReply:(id)arg1;
- (void)_performUpdate;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)rnfWiFiEvent:(id)arg1 withInfo:(id)arg2;
- (void)_setMPTCPAdvisoryCell:(int)arg1;
- (void)_setMPTCPAdvisoryWiFi:(long long)arg1;
- (void)handleSrcEvent;
- (void)setupSockFD;
- (void)_setMPTCPAdvisoryWiFi:(long long)arg1 Cell:(int)arg2;

@end
