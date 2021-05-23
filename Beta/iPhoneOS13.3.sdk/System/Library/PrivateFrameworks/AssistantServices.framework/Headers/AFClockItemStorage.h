/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@protocol AFClockItemStorageDelegate;

@interface AFClockItemStorage : NSObject

{
    id <AFClockItemStorageDelegate> _delegate;
    long long _groupingDepth;
    unsigned long long _workingGeneration;
    NSDate *_workingDate;
    NSMutableDictionary *_workingItemsByID;
    NSString *_identifier;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_itemsByID;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *itemsByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)deleteAllItems;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)beginGrouping;
- (void)endGrouping;
- (id)itemWithID:(id)arg1;
- (void)insertOrUpdateItems:(id)arg1;
- (void)deleteItemsWithIDs:(id)arg1;

@end
