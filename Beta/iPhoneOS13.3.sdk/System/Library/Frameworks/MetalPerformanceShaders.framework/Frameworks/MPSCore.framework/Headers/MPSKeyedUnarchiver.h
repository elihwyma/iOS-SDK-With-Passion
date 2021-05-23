/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSKeyedUnarchiver.h>

@protocol MTLDevice;

@interface MPSKeyedUnarchiver : NSKeyedUnarchiver

{
    id <MTLDevice> _device;
}

+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 device:(id)arg3 error:(id *)arg4;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 device:(id)arg3 error:(id *)arg4;
+ (id)unarchiveObjectWithData:(id)arg1 device:(id)arg2;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 device:(id)arg2 error:(id *)arg3;
+ (id)unarchiveObjectWithFile:(id)arg1 device:(id)arg2;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initForReadingFromData:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)mpsMTLDevice;
- (id)initForReadingWithData:(id)arg1 device:(id)arg2;

@end
