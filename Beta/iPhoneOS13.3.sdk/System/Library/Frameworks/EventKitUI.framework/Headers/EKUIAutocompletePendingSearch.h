/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSString;

@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKUIAutocompletePendingSearch : NSObject

{
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    id <CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_queue;
+ (id)_eventKitQueue;
+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;

- (void)cancel;
- (void)searchWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
