//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAPaths : NSObject
{
    NSMutableArray *_paths;
}

+ (id)pathsWithPaths:(id)arg1;
+ (id)paths;
// - (void).cxx_destruct;
- (id)uniqueEdgesForLabel:(id)arg1;
- (id)uniqueNodesForLabel:(id)arg1;
- (void)enumerateWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)graphRepresentationWithStrictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2;
- (void)removeAllPaths;
- (void)setPaths:(id)arg1;
- (void)addPath:(id)arg1;
- (id)pathAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)description;
- (id)init;

@end

