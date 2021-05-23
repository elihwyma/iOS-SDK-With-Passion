/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSSet.h>

@interface NSSet (WFMapping)

@property (nonatomic, readonly) NSSet *wf_combinations;

- (id)mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)mapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)wf_combinationsWithRepetitionsOfSize:(unsigned long long)arg1;

@end
