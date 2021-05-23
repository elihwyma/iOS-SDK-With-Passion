/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface SBHSetDiff : NSObject

{
    NSSet *_fromSet;
    NSSet *_toSet;
    NSSet *_additions;
    NSSet *_deletions;
    NSSet *_updates;
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
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;

@end
