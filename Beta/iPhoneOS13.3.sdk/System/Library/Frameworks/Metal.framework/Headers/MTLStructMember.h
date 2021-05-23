/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLStructMember : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long argumentIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)structType;
- (id)arrayType;
- (id)indirectArgumentType;
- (id)textureReferenceType;
- (id)pointerType;

@end
