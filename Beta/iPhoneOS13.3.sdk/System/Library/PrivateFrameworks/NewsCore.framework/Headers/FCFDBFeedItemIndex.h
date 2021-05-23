/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <CoreData/NSManagedObject.h>

@class FCFDBFeedItem, NSNumber;

@interface FCFDBFeedItemIndex : NSManagedObject

@property (nonatomic) NSNumber *feedLookupID;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long order;
@property (retain, nonatomic) FCFDBFeedItem *feedItem;

@end
