/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, NSMutableArray, NSMutableDictionary, OADBlipCollection, OADColorMap, OADColorScheme, OADFontScheme, OADStyleMatrix, OAVReadState, OAXClient, OAXTableStyleCache, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXDrawingState : OCXReadState

{
    OAXClient *mClient;
    OCPPackagePart *mPackagePart;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mDrawableIdToVmlShapeIdMap;
    OADBlipCollection *mTgtBlipCollection;
    NSMutableDictionary *mSrcURLToTgtBlipIndexMap;
    NSMutableArray *mTgtBulletBlips;
    NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;
    OAVReadState *mOavState;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    OADFontScheme *mFontScheme;
    NSMutableArray *mGroupStack;
    CXNamespace *mOAXMainNamespace;
    CXNamespace *mOAXChartNamespace;
    CXNamespace *mOAXChartDrawingNamespace;
    CXNamespace *mOAXCompatNamespace;
    CXNamespace *mOAXLockedCanvasNamespace;
    CXNamespace *mOAXPictureNamespace;
    CXNamespace *mOAXTableNamespace;
    CXNamespace *mOAXWordProcessingMLNamespace;
    CXNamespace *mOAXDrawing2010Namespace;
    CXNamespace *mOAXChart2012Namespace;
    CXNamespace *mOAXMathNamespace;
    id mDocumentState;
    CDUnknownBlockType _clientChartGraphicPropertyDefaultsBlock;
}

@property (weak) id documentState;
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap;
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap;
@property (retain, nonatomic) CXNamespace *OAXMainNamespace;
@property (retain, nonatomic) CXNamespace *OAXChartNamespace;
@property (retain, nonatomic) CXNamespace *OAXChartDrawingNamespace;
@property (retain, nonatomic) CXNamespace *OAXCompatNamespace;
@property (retain, nonatomic) CXNamespace *OAXLockedCanvasNamespace;
@property (retain, nonatomic) CXNamespace *OAXPictureNamespace;
@property (retain, nonatomic) CXNamespace *OAXTableNamespace;
@property (retain, nonatomic) CXNamespace *OAXWordProcessingMLNamespace;
@property (retain, nonatomic) CXNamespace *OAXDrawing2010Namespace;
@property (retain, nonatomic) CXNamespace *OAXChart2012Namespace;
@property (retain, nonatomic) CXNamespace *OAXMathNamespace;
@property (copy, nonatomic) CDUnknownBlockType clientChartGraphicPropertyDefaultsBlock;

- (id)init;
- (id)client;
- (id)initWithClient:(id)arg1;
- (id)appVersion;
- (id)colorMap;
- (void)setColorMap:(id)arg1;
- (void)pushGroup:(id)arg1;
- (id)colorScheme;
- (void)setColorScheme:(id)arg1;
- (id)styleMatrix;
- (_Bool)isInsideGroup;
- (id)fontScheme;
- (id)packagePart;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3;
- (id)peekGroup;
- (void)setPackagePart:(id)arg1;
- (void)setStyleMatrix:(id)arg1;
- (id)tableStyleCache;
- (void)setTableStyleCache:(id)arg1;
- (id)drawableForShapeId:(unsigned int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (id)vmlShapeIdForDrawableId:(unsigned int)arg1;
- (void)setVmlShapeId:(id)arg1 forDrawableId:(unsigned int)arg2;
- (void)resetForNewDrawing;
- (id)oavState;
- (void)setOavState:(id)arg1;
- (void)setFontScheme:(id)arg1;
- (id)targetBlipCollection;
- (void)clearTargetBlipCollection;
- (void)setTargetBlipCollection:(id)arg1;
- (void)setTargetBulletBlipArray:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (id)bulletBlipRefForURL:(id)arg1;
- (id)popGroup;
- (void)replaceGroupStack:(id)arg1;

@end
