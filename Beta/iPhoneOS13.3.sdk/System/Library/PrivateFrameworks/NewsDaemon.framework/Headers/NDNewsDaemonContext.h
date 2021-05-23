/*
 Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NDNewsService;

@interface NDNewsDaemonContext : NSObject

{
    CDUnknownBlockType _updateResultsHandler;
    id <NDNewsService> _daemon;
}

@property (retain, nonatomic) id <NDNewsService> daemon;
@property (copy, nonatomic) CDUnknownBlockType updateResultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_queue;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)serviceHasNewTodayResults;

@end
