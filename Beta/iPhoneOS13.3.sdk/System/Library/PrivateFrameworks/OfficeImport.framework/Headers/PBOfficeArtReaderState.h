/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABReaderState.h>

@class PBPresentationReaderState, PXPresentationState;

__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderState : OABReaderState

{
    PXPresentationState *mXmlDocumentState;
    PBPresentationReaderState *mPresentationState;
}

@property (weak, readonly) PBPresentationReaderState *presentationState;

- (id)xmlDrawingState;
- (id)drawableOnTgtSlideForShapeId:(int)arg1;
- (id)xmlDocumentState;
- (id)initWithPresentationState:(id)arg1;

@end
