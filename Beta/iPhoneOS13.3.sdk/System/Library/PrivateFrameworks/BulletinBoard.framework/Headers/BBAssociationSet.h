/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BBAssociationSet : NSObject

{
    NSString *_associationSetKey;
    unsigned long long _associatedObjectMemoryPointerFunction;
}

+ (id)setWithStrongAssociation;
+ (id)setWithWeakAssociation;

- (id)associatedObjectsForObject:(id)arg1;
- (void)associateObject:(id)arg1 withObject:(id)arg2;
- (void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2;
- (id)_initWithMemoryPointerFunction:(unsigned long long)arg1;

@end
