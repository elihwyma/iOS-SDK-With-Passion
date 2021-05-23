/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAXDrawingState.h>

@class EXReadState;

__attribute__((visibility("hidden")))
@interface EXOfficeArtState : OAXDrawingState

{
    EXReadState *mExcelState;
}

@property (weak, readonly) EXReadState *excelState;

- (id)initWithExcelState:(id)arg1;

@end
