/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDocument.h>

@class ECMappingContext, EDProcessors, EDReference, EDResources, EDWarnings, ESDContainer, NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EDWorkbook : OCDDocument

{
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned long long mActiveSheetIndex;
    NSDate *mDateBaseDate;
    int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    NSMutableArray *mBulletBlips;
    ESDContainer *mEscherDrawingGroup;
    _Bool mIsOutOfMemoryConditionDetected;
}

+ (id)impliedColorMap;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)temporaryDirectory;
- (id)warnings;
- (id)fileName;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)visibleRange;
- (void)setVisibleRange:(id)arg1;
- (id)processors;
- (id)sheetAtIndex:(unsigned long long)arg1;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;
- (unsigned long long)sheetCount;
- (id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(_Bool)arg2;
- (id)workbookName;
- (id)bulletBlips;
- (id)initWithStringOptimization:(_Bool)arg1;
- (void)addSheet:(id)arg1;
- (void)applyProcessors;
- (id)mappingContext;
- (unsigned long long)indexOfSheet:(id)arg1;
- (void)outOfMemoryDetected;
- (void)reduceMemoryIfPossible;
- (id)initWithFileName:(id)arg1 andStringOptimization:(_Bool)arg2;
- (void)addOtherResources:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (id)dateBaseDate;
- (int)dateBase;
- (void)setDateBase:(int)arg1;
- (unsigned int)legacyDateBase;
- (void)removeSheetAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSheetWithName:(id)arg1;
- (id)activeSheet;
- (void)setActiveSheet:(id)arg1;
- (void)setMappingContext:(id)arg1;
- (_Bool)isOutOfMemoryDetected;
- (id)escherDrawingGroup;
- (void)setEscherDrawingGroup:(id)arg1;
- (unsigned long long)activeSheetIndex;
- (void)setActiveSheetIndex:(unsigned long long)arg1;

@end
