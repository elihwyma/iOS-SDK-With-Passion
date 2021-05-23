/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class NSMutableDictionary, NSMutableSet, OAXDrawingState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVReadState : OCXReadState

{
    Class mClient;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
    OAXDrawingState *mOAXState;
}

@property (weak) OAXDrawingState *oaxState;

- (Class)client;
- (id)packagePart;
- (void)setPackagePart:(id)arg1;
- (void)resetForNewDrawing;
- (id)blipRefForURL:(id)arg1;
- (id)drawableForVmlShapeId:(id)arg1;
- (void)addDualDrawable:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (unsigned short)shapeTypeForId:(id)arg1;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (_Bool)isDualDrawable:(id)arg1;

@end
