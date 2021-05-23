/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList

{
    NSMutableDictionary *mNamesList;
}

- (id)init;
- (void)dealloc;
- (long long)count;
- (id)initWithContext:(id)arg1;
- (_Bool)supportsIDMapForType:(int)arg1;
- (struct TSUCustomFormat *)customFormatForKey:(unsigned int)arg1;
- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(_Bool)arg2;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 duringImport:(_Bool)arg2;
- (void)p_setupNamesList;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (unsigned int)maxKey;
- (id)allNumberKeys;
- (id)newUniqueNameFromName:(id)arg1;

@end
