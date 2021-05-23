/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CXNamespace;

__attribute__((visibility("hidden")))
@interface OCXState : NSObject

{
    int mXMLFormat;
    CXNamespace *mOCXRelationshipsNamespace;
    CXNamespace *mOCXDrawingNamespace;
}

@property (nonatomic, readonly) int xmlFormat;
@property (retain, nonatomic) CXNamespace *OCXRelationshipsNamespace;
@property (retain, nonatomic) CXNamespace *OCXDrawingNamespace;

- (id)init;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)OCXThemeRelationshipType;
- (id)OCXStylesRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXDrawingRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXCommentsExtendedRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXSlideMasterRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXSlideRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXSettingsRelationshipType;
- (void)setXmlFormat:(int)arg1;

@end
