/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NRRegistryQueryCompletionBlockEntry : NSObject

{
    CDUnknownBlockType _block;
    unsigned long long _updateCounter;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) unsigned long long updateCounter;

- (id)initWithUpdateCounter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
