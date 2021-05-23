/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject

{
    SXDataRecordStore *_recordStore;
    unsigned long long _dataOrientation;
}

@property (nonatomic, readonly) SXDataRecordStore *recordStore;
@property (nonatomic, readonly) unsigned long long dataOrientation;

- (id)initWithRecordStore:(id)arg1 dataOrientation:(unsigned long long)arg2;
- (_Bool)validateRowSelector:(id)arg1 forRowIndex:(unsigned long long)arg2;
- (_Bool)validateColumnSelector:(id)arg1 forColumnIndex:(unsigned long long)arg2;
- (_Bool)validateCellSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (id)conditionEngineForSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (id)descriptorForIndexPath:(CDStruct_2fea82da)arg1;

@end
