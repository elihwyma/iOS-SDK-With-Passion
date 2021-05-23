/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, NSMutableDictionary, OAVReadState, OAXDrawingState, OAXTableStyleCache, PDPresentation;

@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : OCXReadState

{
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    id <TCCancelDelegate> mCancel;
    CXNamespace *mPXPresentationMLNamespace;
    NSMutableDictionary *mCommentAuthorIdToIndexMap;
}

@property (retain, nonatomic) id <TCCancelDelegate> cancelDelegate;
@property (nonatomic, readonly) NSMutableDictionary *commentAuthorIdToIndexMap;
@property (retain, nonatomic) CXNamespace *PXPresentationMLNamespace;

+ (void)setPptChartGraphicPropertyDefaultBlock:(id)arg1;

- (id)init;
- (_Bool)isCancelled;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)tableStyleCache;
- (id)oavState;
- (id)officeArtState;
- (id)tgtPresentation;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (void)setTgtPresentation:(id)arg1;
- (void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2;
- (long long)slideIndexForSlideURL:(id)arg1;
- (id)modelObjectForLocation:(id)arg1;
- (void)resetOfficeArtState;

@end
