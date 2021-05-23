/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLQueryTable, HMBModel, NSArray, NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneProcessTuple : HMFObject

{
    HMBModel *_previous;
    HMBModel *_update;
    unsigned long long _recordRow;
    unsigned long long _itemRow;
    NSData *_externalID;
    NSData *_externalData;
    NSUUID *_modelSchema;
    NSString *_modelType;
    HMBLocalSQLQueryTable *_queryTable;
    NSArray *_encodedQueryableColumns;
}

@property (nonatomic, readonly) HMBModel *previous;
@property (nonatomic, readonly) HMBModel *update;
@property (nonatomic) unsigned long long recordRow;
@property (nonatomic) unsigned long long itemRow;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) NSUUID *modelSchema;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) HMBLocalSQLQueryTable *queryTable;
@property (nonatomic, readonly) NSArray *encodedQueryableColumns;

- (id)initWithPrevious:(id)arg1 update:(id)arg2 recordRow:(unsigned long long)arg3 itemRow:(unsigned long long)arg4 modelSchema:(id)arg5 modelType:(id)arg6 externalID:(id)arg7 externalData:(id)arg8 queryTable:(id)arg9;

@end
