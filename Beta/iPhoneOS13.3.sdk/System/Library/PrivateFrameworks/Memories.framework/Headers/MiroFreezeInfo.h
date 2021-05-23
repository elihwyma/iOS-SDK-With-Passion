/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MiroFreezeInfo : NSObject

{
    _Bool _isFreeze;
    _Bool _isRemoved;
    _Bool _isAdded;
}

@property (nonatomic, readonly) _Bool isFreeze;
@property (nonatomic, readonly) _Bool isRemoved;
@property (nonatomic, readonly) _Bool isAdded;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)freezeInfoWithData:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
