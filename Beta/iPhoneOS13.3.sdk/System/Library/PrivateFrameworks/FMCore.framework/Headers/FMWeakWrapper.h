/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@interface FMWeakWrapper : NSObject

{
    id _object;
    unsigned long long _objectHash;
}

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end
