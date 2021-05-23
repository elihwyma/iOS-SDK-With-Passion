/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OITSUPathSet : NSObject <Swift>

{
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    OITSUPathSet *mUnderlyingSet;
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
