/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCBReader.h>

@class NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, WBOfficeArtReaderState, WDDocument;

__attribute__((visibility("hidden")))
@interface WBReader : OCBReader

{
    struct WrdNoteTable *mFootnoteTable;
    struct WrdNoteTable *mEndnoteTable;
    struct WrdAnnotationTable *mAnnotationTable;
    struct WrdCPTableHeaders *mTableHeaders;
    struct WrdBookmarkTable *mBookmarkTable;
    struct WrdBookmarkTable *mAnnotationBookmarkTable;
    struct WrdFieldPositionTable *mFieldPositionTables[8];
    struct WrdStoryTable *mStoryTable;
    struct WrdStoryTable *mHeaderStoryTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory *mEshObjectFactory;
    struct WrdParagraphProperties *mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    OITSUNoCopyDictionary *mIndexToStyles;
    OITSUNoCopyDictionary *mIndexToFonts;
    NSMutableDictionary *mPreviousFlowElement;
    WBOfficeArtReaderState *mOfficeArtState;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo>> *mTextBoxes;
    _Bool mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
    WDDocument *mTargetDocument;
}

@property (weak, nonatomic) WDDocument *targetDocument;
@property (readonly) NSMutableDictionary *previousFlowElement;

- (void)dealloc;
- (void)initialize;
- (_Bool)start;
- (id)fontAtIndex:(int)arg1;
- (struct WrdCPTableHeaders *)tableHeaders;
- (id)read;
- (void)setReportProgress:(_Bool)arg1;
- (_Bool)reportProgress;
- (id)initWithCancelDelegate:(id)arg1;
- (id)drawableForShapeId:(unsigned int)arg1;
- (id)officeArtState;
- (struct WrdEshObjectFactory *)eshObjectFactory;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (void)setOfficeArtState:(id)arg1;
- (struct WrdAnnotationTable *)annotationTable;
- (struct WrdBinaryReader *)wrdReader;
- (id)annotationOwner:(int)arg1;
- (struct WrdBookmarkTable *)annotationBookmarkTable;
- (void)setAnnotationRangeStart:(id)arg1;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (struct WrdBookmarkTable *)bookmarkTable;
- (id)readCharactersForTextRun:(struct WrdTextRun *)arg1;
- (struct WrdNoteTable *)footnoteTable;
- (struct WrdNoteTable *)endnoteTable;
- (id)annotationRangeStart;
- (struct WrdFieldPositionTable *)fieldPositionTableForTextType:(int)arg1;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1;
- (id)styleAtIndex:(int)arg1;
- (struct WrdStoryTable *)storyTable;
- (struct WrdStoryTable *)headerStoryTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;
- (struct WrdParagraphProperties *)lastRowParagraphProperties;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties *)arg1;
- (id)styleAtIndex:(int)arg1 expectedType:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (void)addFont:(id)arg1 index:(int)arg2;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned long long)arg1;

@end
