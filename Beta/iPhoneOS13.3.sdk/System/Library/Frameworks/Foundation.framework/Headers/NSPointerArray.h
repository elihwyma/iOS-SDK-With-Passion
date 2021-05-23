/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <Swift>

@property (copy, readonly) NSPointerFunctions *pointerFunctions;
@property unsigned long long count;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)allObjects;
- (id)initWithPointerFunctions:(id)arg1;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(void *)arg1;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;
- (void)compact;
- (id)mutableArray;

@end
