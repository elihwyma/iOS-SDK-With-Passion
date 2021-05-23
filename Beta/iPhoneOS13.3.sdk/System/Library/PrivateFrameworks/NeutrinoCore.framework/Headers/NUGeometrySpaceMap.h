/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSMutableDictionary;

@interface NUGeometrySpaceMap : NSObject <Swift>

{
    NSMutableDictionary *_spaces;
}

@property (retain) NSMutableDictionary *spaces;

+ (id)_reduceSpaces:(id)arg1 withSpaces:(id)arg2;
+ (_Bool)_canReduceSpaces:(id)arg1 withSpaces:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)applyTransform:(id)arg1;
- (void)addTagNode:(id)arg1;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id *)arg3;
- (id)initWithSpaceMap:(id)arg1;
- (id)taggedSpacesForKey:(id)arg1;
- (id)spacesForKey:(id)arg1;
- (id)spaceForKey:(id)arg1;
- (void)setSpace:(id)arg1 forKey:(id)arg2;
- (void)setSpaces:(id)arg1 forKey:(id)arg2;
- (void)setSpacesFromMap:(id)arg1 andPruneAgainstTagNode:(id)arg2 withPath:(id)arg3;
- (void)mergeWithSpaceMap:(id)arg1;

@end
