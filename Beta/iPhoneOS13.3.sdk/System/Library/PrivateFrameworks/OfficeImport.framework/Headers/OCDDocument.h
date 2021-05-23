/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, OADBlipCollection, OADGraphicStyleCache, OADTableStyleCollection, OADTextListStyle, OADTheme, OCDReader, OCDSummary, OCDWriter, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface OCDDocument : NSObject

{
    OCDWriter *mWriter;
    OCDSummary *mSummary;
    OADBlipCollection *mBlips;
    NSMutableArray *mCharts;
    OADTableStyleCollection *mTableStyles;
    OITSUPointerKeyDictionary *mDualDrawableMap;
    OADTheme *mDocumentTheme;
    OADTextListStyle *mDefaultTextStyle;
    OADGraphicStyleCache *mGraphicStyleCache;
    NSData *mEncryptionInfo;
    OCDReader *mReader;
}

@property (retain, nonatomic) OCDReader *reader;
@property (retain, nonatomic) OCDWriter *writer;
@property (nonatomic, readonly) OCDSummary *summary;
@property (nonatomic, readonly) OADBlipCollection *blips;
@property (nonatomic, readonly) NSMutableArray *charts;
@property (nonatomic, readonly) OADTableStyleCollection *tableStyles;
@property (nonatomic, readonly) OITSUPointerKeyDictionary *dualDrawableMap;
@property (nonatomic, readonly) OADTextListStyle *defaultTextStyle;
@property (retain, nonatomic) OADGraphicStyleCache *graphicStyleCache;

- (id)init;
- (id)theme;
- (void)setTheme:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (_Bool)isFromBinaryFile;
- (id)encryptionInfo;
- (void)setEncryptionInfo:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)bulletBlips;

@end
