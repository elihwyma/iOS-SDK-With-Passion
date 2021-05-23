/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICCloudThrottlingLevel : NSObject

{
    double _batchInterval;
    unsigned long long _numberOfBatches;
}

@property (nonatomic) double batchInterval;
@property (nonatomic) unsigned long long numberOfBatches;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2;

@end
