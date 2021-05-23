/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SCKZoneDiff : NSObject

{
    NSArray *_modifiedRecords;
    NSArray *_deletedRecordIDs;
}

@property (copy, nonatomic, readonly) NSArray *modifiedRecords;
@property (copy, nonatomic, readonly) NSArray *deletedRecordIDs;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (id)applyToRecords:(id)arg1;
- (void)applyToModifyRecordsOperation:(id)arg1;
- (_Bool)hasSameBaseAsDiff:(id)arg1;

@end
