/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CalendarModel, NSDate, NSSet;

@protocol EKUIAccountRefresherDelegate;

@interface EKUIAccountRefresher : NSObject

{
    CalendarModel *_model;
    _Bool _sourcesCurrentlySyncing;
    NSDate *_refreshStartDate;
    _Bool _refreshing;
    id <EKUIAccountRefresherDelegate> _delegate;
    NSSet *_refreshingSources;
}

@property (weak, nonatomic) id <EKUIAccountRefresherDelegate> delegate;
@property (nonatomic, readonly) _Bool refreshing;
@property (nonatomic, readonly) NSSet *refreshingSources;
@property (nonatomic, readonly) _Bool allAccountsOffline;

- (void)refresh;
- (void)_syncDidStart;
- (void)_eventStoreChanged:(id)arg1;
- (_Bool)_areAnySourcesCurrentlySyncing;
- (void)_syncDidEnd;
- (void)_cancelSyncStartTimeout;
- (_Bool)_allSourcesRefreshed;
- (void)_syncCompleted;
- (void)_beginSyncStartTimeout;
- (_Bool)sourceFinishedRefreshing:(id)arg1;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (id)initWithCalendarModel:(id)arg1;

@end
