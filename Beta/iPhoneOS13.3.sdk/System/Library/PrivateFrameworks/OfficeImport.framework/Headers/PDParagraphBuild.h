/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild

{
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    _Bool mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)arg1;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setIsReversedParagraphOrder:(_Bool)arg1;
- (void)setBuildLevel:(int)arg1;
- (double)autoAdvanceTime;
- (_Bool)isReversedParagraphOrder;
- (int)buildLevel;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (id)addTimeNodeData;

@end
