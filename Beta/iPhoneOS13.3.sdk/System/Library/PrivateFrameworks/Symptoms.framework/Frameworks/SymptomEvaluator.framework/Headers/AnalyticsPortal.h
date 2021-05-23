/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSXPCListener, ServiceImpl;

__attribute__((visibility("hidden")))
@interface AnalyticsPortal : NSObject

{
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (id)sharedInstance;
+ (void)shutdown;
+ (void)clientTransactionsRelease;
+ (void)setListeningPort:(const char *)arg1 queue:(id)arg2;

- (void)shutdown;
- (void)clientTransactionsRelease;
- (void)setListeningPort:(const char *)arg1 queue:(id)arg2;

@end
