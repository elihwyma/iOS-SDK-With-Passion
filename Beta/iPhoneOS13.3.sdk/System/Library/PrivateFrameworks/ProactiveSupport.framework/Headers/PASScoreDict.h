/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSharedKeySet;

@interface PASScoreDict : NSObject

{
    struct vector<float, std::__1::allocator<float>> *_mphtStorage;
    NSSharedKeySet *_sharedKeySet;
    NSMutableDictionary *_sideDict;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)scoreDictFromDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithDefaultValueForSharedKeySet:(id)arg1;
- (id)initWithDefaultValueForKeys:(id)arg1;
- (id)initWithDefaultValueForScoreInputSetKeys:(id)arg1;
- (void)setScore:(double)arg1 forKey:(id)arg2;
- (double)scoreForKey:(id)arg1 found:(_Bool *)arg2;
- (void)setScore:(double)arg1 forSharedKeySetIndex:(unsigned long long)arg2;
- (double)scoreForSharedKeySetIndex:(unsigned long long)arg1;
- (id)toDictionary;

@end
