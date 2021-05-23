/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@interface MPSMatrixDescriptor : NSObject

{
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned int _dataType;
}

@property (nonatomic) unsigned long long rows;
@property (nonatomic) unsigned long long columns;
@property (nonatomic, readonly) unsigned long long matrices;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long rowBytes;
@property (nonatomic, readonly) unsigned long long matrixBytes;

+ (id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (unsigned long long)rowBytesForColumns:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (unsigned long long)rowBytesFromColumns:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (id)matrixDescriptorWithDimensions:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 matrices:(unsigned long long)arg3 rowBytes:(unsigned long long)arg4 matrixBytes:(unsigned long long)arg5 dataType:(unsigned int)arg6;

- (id)init;

@end
