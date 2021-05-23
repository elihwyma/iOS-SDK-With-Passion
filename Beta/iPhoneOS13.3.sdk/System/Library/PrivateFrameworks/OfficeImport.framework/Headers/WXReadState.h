/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, NSMutableArray, NSMutableDictionary, OAXDrawingState, OCPPackagePart, OITSUNoCopyDictionary, WDCharacterRun, WDDocument, WXOAVReadState;

@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WXReadState : OCXReadState

{
    WDDocument *mDocument;
    OITSUNoCopyDictionary *mTextNodesToBeAdded;
    OITSUNoCopyDictionary *mMapBookmarkIdToName;
    OITSUNoCopyDictionary *mMapAnnotationIdToAnnotation;
    OITSUNoCopyDictionary *mMapAnnotationParaIdToAnnotation;
    NSMutableDictionary *mMapFlowIdToTextBox;
    OCPPackagePart *mPackagePart;
    OCPPackagePart *mAnnotationPart;
    OCPPackagePart *mAnnotationExtendedPart;
    struct _xmlDoc *mFootnoteDocument;
    struct _xmlNode *mFootnotes;
    struct _xmlDoc *mEndnoteDocument;
    struct _xmlNode *mEndnotes;
    struct _xmlDoc *mAnnotationDocument;
    struct _xmlNode *mAnnotations;
    struct _xmlDoc *mAnnotationExtendedDocument;
    struct _xmlNode *mAnnotationsExtended;
    NSMutableArray *mDeleteAuthorStack;
    NSMutableArray *mDeleteDateStack;
    NSMutableArray *mEditAuthorStack;
    NSMutableArray *mEditDateStack;
    NSMutableArray *mFormatAuthorStack;
    NSMutableArray *mFormatDateStack;
    NSMutableArray *mPendingCommentNodes;
    NSMutableArray *mPendingBookmarkNodes;
    WXOAVReadState *mWXOavState;
    OAXDrawingState *mDrawingState;
    int mCurrentOfficeArtTextType;
    WDCharacterRun *mReadSymbolTo;
    _Bool mNewSectionRequested;
    _Bool mReadingMath;
    unsigned long long mCurrentRowCNFStyle;
    unsigned long long mCurrentCellCNFStyle;
    _Bool mCurrentTableWraps;
    id <TCCancelDelegate> mCancelDelegate;
    CXNamespace *mWXMainNamespace;
    CXNamespace *mWXDrawingNamespace;
    CXNamespace *mWXShapeNamespace;
    CXNamespace *mWXGroupNamespace;
    CXNamespace *mWXOOBibliographyNamespace;
    CXNamespace *mWXRelationshipNamespace;
    _Bool mIsThumbnail;
}

@property (nonatomic) int currentOfficeArtTextType;
@property (retain, nonatomic) id <TCCancelDelegate> cancelDelegate;
@property (retain, nonatomic) CXNamespace *WXMainNamespace;
@property (retain, nonatomic) CXNamespace *WXDrawingNamespace;
@property (retain, nonatomic) CXNamespace *WXShapeNamespace;
@property (retain, nonatomic) CXNamespace *WXGroupNamespace;
@property (retain, nonatomic) CXNamespace *WXOOBibliographyNamespace;
@property (retain, nonatomic) CXNamespace *WXRelationshipNamespace;
@property (nonatomic) _Bool readingMath;

- (id)init;
- (void)dealloc;
- (void)setDocument:(id)arg1;
- (id)document;
- (_Bool)isThumbnail;
- (_Bool)hasAnnotations;
- (void)setIsThumbnail:(_Bool)arg1;
- (id)packagePart;
- (void)setupNSForXMLFormat:(int)arg1;
- (void)setPackagePart:(id)arg1;
- (id)drawingState;
- (id)currentDeleteAuthor;
- (id)currentDeleteDate;
- (id)currentEditAuthor;
- (id)currentEditDate;
- (void)setDocumentPart:(id)arg1;
- (struct _xmlNode *)xmlFootnoteWithID:(long long)arg1;
- (struct _xmlNode *)xmlEndnoteWithID:(long long)arg1;
- (id)wxoavState;
- (void)setTextBox:(id)arg1 forFlowId:(id)arg2;
- (id)textBoxForFlowId:(id)arg1;
- (id)readSymbolTo;
- (void)setReadSymbolTo:(id)arg1;
- (void)pushEditAuthor:(id)arg1 date:(id)arg2;
- (void)popEditAuthorDate;
- (void)pushDeleteAuthor:(id)arg1 date:(id)arg2;
- (void)popDeleteAuthorDate;
- (id)nodesToBeAdded:(id)arg1;
- (void)clearOutNodesToBeAdded:(id)arg1;
- (void)addPendingComment:(struct _xmlNode *)arg1;
- (_Bool)currentTableWraps;
- (void)setCurrentRowCNFStyle:(unsigned long long)arg1;
- (void)setCurrentCellCNFStyle:(unsigned long long)arg1;
- (void)setCurrentTableWraps:(_Bool)arg1;
- (unsigned long long)currentCellCNFStyle;
- (unsigned long long)currentRowCNFStyle;
- (void)addText:(id)arg1 node:(struct _xmlNode *)arg2;
- (void)addPendingBookmark:(struct _xmlNode *)arg1;
- (id)pendingComments;
- (void)clearPendingComments;
- (id)pendingBookmarks;
- (void)clearPendingBookmarks;
- (_Bool)isNewSectionRequested;
- (void)setNewSectionRequested:(_Bool)arg1;
- (id)initNoStacksWith:(id)arg1;
- (void)addBookmarkId:(long long)arg1 name:(id)arg2;
- (id)bookmarkName:(long long)arg1;
- (void)addAnnotationId:(long long)arg1 annotation:(id)arg2;
- (id)annotationWithId:(long long)arg1;
- (void)addAnnotationParaId:(unsigned int)arg1 annotation:(id)arg2;
- (id)annotationWithParaId:(unsigned int)arg1;
- (_Bool)hasAnnotationsExtended;
- (struct _xmlNode *)xmlAnnotationWithID:(long long)arg1;
- (struct _xmlNode *)xmlAnnotationExtendedWithParaId:(unsigned int)arg1;
- (id)annotationPart;
- (void)setAnnotationPart:(id)arg1;
- (id)annotationExtendedPart;
- (void)setAnnotationExtendedPart:(id)arg1;
- (void)pushFormatAuthor:(id)arg1 date:(id)arg2;
- (void)popFormatAuthorDate;
- (id)currentFormatAuthor;
- (id)currentFormatDate;

@end
