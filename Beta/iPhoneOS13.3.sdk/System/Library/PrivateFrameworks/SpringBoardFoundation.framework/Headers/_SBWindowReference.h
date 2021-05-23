/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface _SBWindowReference : NSObject

{
    id _object;
}

@property (nonatomic, readonly) unsigned long long pointer;
@property (nonatomic, readonly) id object;

+ (id)referenceForObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end
