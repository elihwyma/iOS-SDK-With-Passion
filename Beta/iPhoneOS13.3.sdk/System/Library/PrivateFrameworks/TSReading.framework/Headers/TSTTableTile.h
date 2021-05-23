/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSArray, NSMutableArray;

@interface TSTTableTile : TSPObject

{
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

@property (nonatomic, readonly) unsigned char maxColumn;
@property (nonatomic, readonly) unsigned short maxRow;
@property (nonatomic, readonly) unsigned short numCells;
@property (nonatomic, readonly) unsigned short numRows;
@property (nonatomic, readonly) NSArray *rowInfos;

- (void)dealloc;
- (id)description;
- (void)debugDump;
- (id)initWithContext:(id)arg1;
- (void)validate;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (void)debugListRows;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;

@end
