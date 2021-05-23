/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject

{
    struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type _vectorInlineStorage;
}

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned short)countForValue:(unsigned short)arg1;
- (void)addValue:(unsigned short)arg1;
- (void)_convertToDictionaryRepresentation;
- (unsigned long long)uniqueValueCount;
- (void)enumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_vectorEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_dictEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;

@end
