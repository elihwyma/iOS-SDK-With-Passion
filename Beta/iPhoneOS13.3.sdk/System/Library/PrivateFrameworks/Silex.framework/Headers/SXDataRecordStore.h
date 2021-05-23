/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXDataRecordStore : NSObject

{
    NSArray *_descriptors;
    NSArray *_records;
}

@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) NSArray *descriptors;

- (unsigned long long)numberOfRecords;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithRecords:(id)arg1 andDescriptors:(id)arg2;
- (id)recordsUsingSortDescriptors:(id)arg1;

@end
