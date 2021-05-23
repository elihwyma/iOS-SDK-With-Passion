/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFeedRange, NSArray, NSData;

@interface FCFeedDatabaseLookupResult : NSObject

{
    _Bool _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    unsigned long long _ckFromOrder;
    unsigned long long _ckToOrder;
    id _insertionToken;
}

@property (nonatomic, readonly) _Bool hasCKCursor;
@property (copy, nonatomic) NSArray *feedItems;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) _Bool exhaustedRange;
@property (copy, nonatomic) NSData *ckFromCursor;
@property (nonatomic) unsigned long long ckFromOrder;
@property (nonatomic) unsigned long long ckToOrder;
@property (retain, nonatomic) id insertionToken;

- (id)description;

@end
