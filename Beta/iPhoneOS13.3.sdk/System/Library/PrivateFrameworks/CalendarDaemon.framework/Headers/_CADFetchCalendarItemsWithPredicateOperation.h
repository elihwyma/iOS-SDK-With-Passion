/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSOperation.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation

{
    NSPredicate *_predicate;
    int _entityType;
    struct CalDatabase *_database;
    int _fetchIdentifier;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) int fetchIdentifier;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(struct CalDatabase *)arg3 fetchIdentifier:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
