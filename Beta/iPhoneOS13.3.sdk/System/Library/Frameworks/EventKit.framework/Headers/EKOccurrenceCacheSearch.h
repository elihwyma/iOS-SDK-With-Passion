/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSNumber, NSSet, NSString;

@interface EKOccurrenceCacheSearch : NSObject

{
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;
    CDUnknownBlockType _callback;
    NSNumber *_replyID;
    _Bool _canceled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;

- (void)run;
- (void)cancel;
- (void)disconnect;
- (id)searchTerm;
- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (int)performSearchOperation:(unsigned int)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(_Bool)arg2;

@end
