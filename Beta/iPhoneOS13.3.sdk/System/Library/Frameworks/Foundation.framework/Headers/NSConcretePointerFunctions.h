/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPointerFunctions.h>

__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions

{
    struct NSSlice slice;
}

+ (_Bool)initializeSlice:(struct NSSlice *)arg1 withOptions:(unsigned long long)arg2;
+ (void)initializeBackingStore:(struct NSSlice *)arg1 sentinel:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setUsesStrongWriteBarrier:(_Bool)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(_Bool)arg1;
- (CDUnknownFunctionPointerType)sizeFunction;
- (CDUnknownFunctionPointerType)hashFunction;
- (CDUnknownFunctionPointerType)isEqualFunction;
- (CDUnknownFunctionPointerType)descriptionFunction;
- (CDUnknownFunctionPointerType)acquireFunction;
- (CDUnknownFunctionPointerType)relinquishFunction;
- (_Bool)usesStrongWriteBarrier;
- (_Bool)usesWeakReadAndWriteBarriers;

@end
