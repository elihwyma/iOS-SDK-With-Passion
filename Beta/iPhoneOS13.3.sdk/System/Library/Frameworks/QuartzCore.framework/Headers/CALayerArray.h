/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface CALayerArray : NSArray

{
    struct _CALayerArrayIvars _ivars;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithLayers:(id *)arg1 count:(unsigned long long)arg2 retain:(_Bool)arg3;

@end
