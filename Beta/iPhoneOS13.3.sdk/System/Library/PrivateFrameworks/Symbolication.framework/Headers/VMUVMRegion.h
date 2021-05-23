/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VMUVMRegion : NSObject

{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    _Bool summarized;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned long long offset;
    unsigned int nesting_depth;
    unsigned int is_submap:1;
    unsigned int is_macho_region:1;
    unsigned int is_unused_data_region:1;
    unsigned int is_unused_data_page_shared_with_active_content:1;
    unsigned int is_wired:1;
    unsigned int reserved_flags:27;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int zone_index;
    unsigned int coalesced_region_count;
    unsigned long long resident_size;
    unsigned long long shared_now_private_size;
    unsigned long long swapped_out_size;
    unsigned long long dirty_size;
    unsigned long long purgable_vol_size;
    unsigned long long purgable_non_vol_size;
    unsigned long long purgable_empty_size;
    unsigned long long reusable_size;
}

+ (void)initialize;
+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;
+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;

- (id)init;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)type;
- (id)path;
- (unsigned long long)address;
- (struct _VMURange)range;
- (unsigned int)protection;
- (_Bool)isSubmap;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;
- (_Bool)hasSameInfoAsRegion:(id)arg1;
- (void)addInfoFromRegion:(id)arg1;
- (id)breakAtLength:(unsigned long long)arg1;
- (id)initWithVMRegionData:(struct _VMUVMRegionData *)arg1 encodedVersion:(long long)arg2 simpleSerializer:(id)arg3;
- (void)setVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg1;
- (void)getVMRegionData:(struct _VMUVMRegionData *)arg1 withSimpleSerializer:(id)arg2;
- (void)getVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg1;
- (unsigned int)maxProtection;
- (_Bool)isWired;

@end
