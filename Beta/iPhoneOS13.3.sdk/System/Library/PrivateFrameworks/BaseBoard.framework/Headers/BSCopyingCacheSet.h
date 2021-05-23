/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject

{
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (id)description;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)immutableSet;

@end
