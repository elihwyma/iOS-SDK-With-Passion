/*
 Image: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CSStore2DataContainer : NSObject

{
    struct Data *p;
    unsigned int pAllocatedLength;
}

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)initWithBytesNoCopy:(struct Data *)arg1 length:(unsigned int)arg2;

@end
