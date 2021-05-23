/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol ProxyAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface ProxyAnalytics : NSObject

{
    id <ProxyAnalyticsDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) id <ProxyAnalyticsDelegate> delegate;

- (void)dealloc;
- (void)trainModelAndScore:(_Bool)arg1 lastScoreDate:(id)arg2;
- (void)performPersistentStoreHealthCheck;

@end
