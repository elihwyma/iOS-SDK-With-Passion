/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface ODXState : OCXReadState

{
    CXNamespace *mODXDiagramNamespace;
    OAXDrawingState *mOfficeArtState;
}

@property (retain, nonatomic) CXNamespace *ODXDiagramNamespace;

- (void)setupNSForXMLFormat:(int)arg1;
- (id)initWithOfficeArtState:(id)arg1;
- (id)officeArtState;

@end
