/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject

{
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (void)dealloc;
- (void)addMatches:(id)arg1;
- (void)addMatch:(id)arg1;
- (id)matchResults;

@end
