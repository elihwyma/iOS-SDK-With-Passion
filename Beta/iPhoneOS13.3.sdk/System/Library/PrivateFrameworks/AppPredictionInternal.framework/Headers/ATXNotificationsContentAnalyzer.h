/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@protocol OS_dispatch_queue;

@interface ATXNotificationsContentAnalyzer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ppnames;
    NSArray *_ppscores;
    NSDate *_lastUpdated;
}

- (id)init;
- (_Bool)isExpired;
- (void)updateAnalyzers;
- (id)analyzeContent:(id)arg1;

@end
