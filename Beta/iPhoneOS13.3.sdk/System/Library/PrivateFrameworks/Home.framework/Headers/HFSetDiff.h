/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSMutableSet, NSSet;

@interface HFSetDiff : NSObject <Swift>

{
    NSSet *_fromSet;
    NSMutableSet *_toSet;
    NSMutableSet *_additions;
    NSMutableSet *_deletions;
    NSMutableSet *_updates;
}

@property (nonatomic, readonly) NSSet *additions;
@property (nonatomic, readonly) NSSet *deletions;
@property (nonatomic, readonly) NSSet *updates;
@property (nonatomic, readonly) NSSet *fromSet;
@property (nonatomic, readonly) NSSet *toSet;

+ (id)diffFromSet:(id)arg1 toSet:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;

@end
