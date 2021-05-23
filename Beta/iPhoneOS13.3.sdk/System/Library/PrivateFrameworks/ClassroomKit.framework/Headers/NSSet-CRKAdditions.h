/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSSet.h>

@class NSArray, NSString;

@interface NSSet (CRKAdditions)

@property (copy, nonatomic, readonly) NSString *crk_stableDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;
@property (copy, nonatomic, readonly) NSArray *allObjects;

- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)setByCombiningWithSet:(id)arg1 operation:(SEL)arg2;
- (id)crk_setBySubtractingSet:(id)arg1;
- (id)crk_setByAddingSet:(id)arg1;
- (id)crk_setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
- (id)setByIntersectingSet:(id)arg1;

@end
