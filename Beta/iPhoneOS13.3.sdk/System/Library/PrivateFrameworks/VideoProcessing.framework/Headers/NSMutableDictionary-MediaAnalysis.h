/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MediaAnalysis)

- (void)vcp_setVersion:(int)arg1;
- (void)vcp_setDateModified:(id)arg1;
- (void)vcp_setDateAnalyzed:(id)arg1;
- (void)vcp_setFlags:(unsigned long long)arg1;
- (void)vcp_setFingerprint:(id)arg1;
- (void)vcp_setResult:(id)arg1 forKey:(id)arg2;
- (void)vcp_addTypes:(unsigned long long)arg1;
- (void)vcp_setSyncPoint:(CDStruct_1b6d18a9)arg1;
- (void)vcp_appendResults:(id)arg1;
- (void)vcp_removeSyncPoint;
- (void)vcp_appendResult:(id)arg1 forKey:(id)arg2;
- (id)vcp_mutableResults;
- (void)vcp_setResults:(id)arg1;
- (void)vcp_setTimerange:(CDStruct_e83c9415)arg1;
- (void)vcp_addFlags:(unsigned long long)arg1;
- (void)vcp_setQuality:(double)arg1;
- (void)vcp_setStatsFlags:(unsigned long long)arg1;
- (void)vcp_setTypes:(unsigned long long)arg1;
- (void)vcp_addEntriesFromResults:(id)arg1;
- (void)vcp_removeResultForKey:(id)arg1;
- (void)vcp_addStatsFlags:(unsigned long long)arg1;

@end
