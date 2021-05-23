/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

#import <Home/Swift-Protocol.h>

@class NAFuture, NSMapTable, NSMutableSet;

@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <Swift>

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableSet *_logItems;
    NSMapTable *_logEntryUniqueIdentifierToLogItemMap;
    NAFuture *_logFetchFuture;
}

@property (nonatomic, readonly) NSMutableSet *logItems;
@property (nonatomic, readonly) NSMapTable *logEntryUniqueIdentifierToLogItemMap;
@property (retain, nonatomic) NAFuture *logFetchFuture;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;

+ (_Bool)prefersNonBlockingReloads;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithMediaProfileContainer:(id)arg1;

@end
