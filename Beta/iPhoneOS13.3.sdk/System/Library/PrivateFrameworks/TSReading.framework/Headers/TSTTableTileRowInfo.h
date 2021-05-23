/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject

{
    struct __CFData *mStorageBuffer;
    unsigned short mStorageOffsets[255];
    unsigned short mBufferSize;
    unsigned short mTileRowIndex;
    unsigned short mCellCount;
    unsigned char mMaxTileColumnIndex;
    _Bool mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}

@property (nonatomic) unsigned short tileRowIndex;
@property (nonatomic, readonly) unsigned short cellCount;

- (void)dealloc;
- (id)description;
- (void)debugDump;
- (void)validate;
- (void)i_upgradeWithDataStore:(id)arg1;
- (id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2;
- (id)p_debugDumpCompact;

@end
