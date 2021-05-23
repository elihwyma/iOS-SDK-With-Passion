/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;

@interface VMUVMRegionIdentifier : NSObject

{
    unsigned int _task;
    int _pid;
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
    _Bool _hasFractionalPageSizes;
}

+ (id)descriptionForRange:(struct _VMURange)arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3;

- (id)init;
- (id)initWithTask:(unsigned int)arg1;
- (id)regions;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1 pid:(int)arg2 options:(unsigned long long)arg3;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned int)arg4;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)initWithGraph:(id)arg1 options:(unsigned long long)arg2;
- (id)nonSubmapRegionContainingAddress:(unsigned long long)arg1;
- (_Bool)hasFractionalPageSizes;
- (id)descriptionForRange:(struct _VMURange)arg1;
- (id)descriptionForRange:(struct _VMURange)arg1 options:(unsigned long long)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;

@end
