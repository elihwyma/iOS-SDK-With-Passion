/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderClient : NSObject

+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (_Bool)tablesAreAllowed;
+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (_Bool)escherIsFullySupported;
+ (id)readClientTextBoxFromShape:(id)arg1 toTextBody:(id)arg2 state:(id)arg3;
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (_Bool)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4;
+ (_Bool)readClientTextBoxFromShape:(id)arg1 toGraphic:(id)arg2 clientData:(id)arg3 state:(id)arg4;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (_Bool)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2 state:(id)arg3;
+ (_Bool)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4;
+ (void)addRecolorSpec:(const struct PptRecolorSpec *)arg1 toDictionary:(id)arg2 state:(id)arg3;
+ (id)newTargetFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3;
+ (int)presetIdFromFlyMethod:(int)arg1 isEntrance:(_Bool)arg2;
+ (int)directionFromFlyDirection:(int)arg1;
+ (id)newBuildFromBuildType:(int)arg1;

@end
