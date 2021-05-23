/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSPointerFunctions : NSObject <Swift>

@property CDUnknownFunctionPointerType hashFunction;
@property CDUnknownFunctionPointerType isEqualFunction;
@property CDUnknownFunctionPointerType sizeFunction;
@property CDUnknownFunctionPointerType descriptionFunction;
@property CDUnknownFunctionPointerType relinquishFunction;
@property CDUnknownFunctionPointerType acquireFunction;
@property _Bool usesStrongWriteBarrier;
@property _Bool usesWeakReadAndWriteBarriers;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end
