/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABReaderState.h>

@class EBReaderState, EXReadState;

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderState : OABReaderState

{
    EXReadState *mXmlDocumentState;
    EBReaderState *mReaderState;
}

@property (weak, readonly) EBReaderState *readerState;

- (id)xmlDrawingState;
- (id)initWithReaderState:(id)arg1;

@end
