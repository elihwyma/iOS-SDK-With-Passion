/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLType.h>

@class NSArray;

@interface MTLStructType : MTLType

@property (readonly) NSArray *members;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)memberByName:(id)arg1;

@end
