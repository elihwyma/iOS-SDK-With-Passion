/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic, readonly) long long capacity;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(long long)arg1;
- (struct DataSet *)_data;
- (void)addValue:(double)arg1;
- (void)appendDataSet:(id)arg1;

@end
