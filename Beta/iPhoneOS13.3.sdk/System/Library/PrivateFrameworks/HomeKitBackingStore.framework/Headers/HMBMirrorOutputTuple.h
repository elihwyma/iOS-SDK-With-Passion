/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLQueryTable, HMBModel, NSData;

@interface HMBMirrorOutputTuple : HMFObject

{
    HMBModel *_model;
    NSData *_externalID;
    NSData *_externalData;
    HMBLocalSQLQueryTable *_queryTable;
    unsigned long long _recordRow;
    unsigned long long _outputBlockRow;
}

@property (readonly) unsigned long long recordRow;
@property (readonly) unsigned long long outputBlockRow;
@property (nonatomic, readonly) HMBModel *model;
@property (copy, nonatomic) NSData *externalID;
@property (copy, nonatomic) NSData *externalData;
@property (nonatomic, readonly) HMBLocalSQLQueryTable *queryTable;

- (id)description;
- (id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6;

@end
