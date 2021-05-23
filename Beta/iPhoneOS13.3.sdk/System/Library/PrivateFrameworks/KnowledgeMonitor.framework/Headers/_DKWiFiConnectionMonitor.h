/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSString, NWPathEvaluator;

@interface _DKWiFiConnectionMonitor : _DKMonitor

{
    NWPathEvaluator *_pathEvaluator;
    struct __WiFiManagerClient *_wifiManager;
    NSString *_currentWirelessSSID;
}

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (nonatomic) struct __WiFiManagerClient *wifiManager;
@property (copy, nonatomic) NSString *currentWirelessSSID;

- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
