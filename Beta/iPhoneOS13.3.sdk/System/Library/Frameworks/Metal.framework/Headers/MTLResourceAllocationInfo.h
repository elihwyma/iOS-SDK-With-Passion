/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

#import <Metal/Swift-Protocol.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <Swift>

@property (readonly) NSString *memoryPool;
@property (readonly) unsigned long long virtualSize;
@property (readonly) unsigned long long residentSize;
@property (readonly) unsigned long long dirtySize;
@property (readonly) _Bool pageoffRequired;
@property (readonly) _Bool purgeable;
@property (readonly) unsigned long long uniqueIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
