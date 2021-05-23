/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString, RBSProcessIdentity;

@interface RBLaunchdJobLabel : NSObject

{
    NSString *_prefix;
    RBSProcessIdentity *_identity;
    unsigned short _seed;
    NSString *_stringRepresentation;
}

@property (copy, nonatomic, readonly) NSString *prefix;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) unsigned short seed;
@property (copy, nonatomic, readonly) NSString *stringRepresentation;

+ (_Bool)mayMatchStringRepresentation:(id)arg1;
+ (id)newLabelWithIdentity:(id)arg1;
+ (id)labelFromStringRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithPrefix:(id)arg1 identity:(id)arg2 seed:(unsigned short)arg3;
- (id)_initWithDaemonIdentity:(id)arg1;

@end
