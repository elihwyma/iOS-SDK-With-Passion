/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@interface MPSVectorDescriptor : NSObject

{
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned int _dataType;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) unsigned long long vectors;
@property (nonatomic) unsigned int dataType;
@property (nonatomic, readonly) unsigned long long vectorBytes;

+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (unsigned long long)vectorBytesForLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 vectors:(unsigned long long)arg2 vectorBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;

- (id)init;

@end
