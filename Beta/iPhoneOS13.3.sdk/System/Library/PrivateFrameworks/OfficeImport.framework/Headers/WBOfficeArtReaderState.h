/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState : OABReaderState

{
    WBReader *mReader;
    int mCurrentTextType;
    WXReadState *mXmlDocumentState;
}

@property (weak, nonatomic) WBReader *reader;
@property (nonatomic) int currentTextType;

- (id)initWithClient:(Class)arg1;
- (id)xmlDrawingState;

@end
