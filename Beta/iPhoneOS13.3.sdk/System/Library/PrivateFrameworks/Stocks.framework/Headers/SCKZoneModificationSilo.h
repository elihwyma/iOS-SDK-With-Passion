/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SCKZoneDiff, SCKZoneSchema;

@interface SCKZoneModificationSilo : NSObject

{
    SCKZoneSchema *_zoneSchema;
    NSMutableDictionary *_originalRecordsByID;
    NSMutableDictionary *_workingRecordsByID;
    NSMutableDictionary *_recordsToSaveByID;
    NSMutableArray *_deletedRecordIDs;
}

@property (retain, nonatomic) SCKZoneSchema *zoneSchema;
@property (retain, nonatomic) NSMutableDictionary *originalRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *workingRecordsByID;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (retain, nonatomic) NSMutableArray *deletedRecordIDs;
@property (copy, nonatomic, readonly) SCKZoneDiff *diff;

- (_Bool)_shouldAssertRecordValidity;
- (void)createOrUpdateRecordWithName:(id)arg1 recordType:(id)arg2 modifyBlock:(CDUnknownBlockType)arg3;
- (void)deleteRecordWithName:(id)arg1;
- (_Bool)recordExistsWithName:(id)arg1;
- (id)initWithZoneSchema:(id)arg1 contents:(id)arg2;

@end
