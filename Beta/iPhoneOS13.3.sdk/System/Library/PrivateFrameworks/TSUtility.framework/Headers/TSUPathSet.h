/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface TSUPathSet : NSObject <Swift>

{
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    TSUPathSet *mUnderlyingSet;
}

+ (void)processPath:(id)arg1 base:(id *)arg2 hasBaseNumber:(_Bool *)arg3 baseNumber:(unsigned int *)arg4 extension:(id *)arg5;
+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned int *)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addPath:(id)arg1;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;
- (void)setUnderlyingPathSet:(id)arg1;
- (_Bool)isPathUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)unionPathSet:(id)arg1;

@end
