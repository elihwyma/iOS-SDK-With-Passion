/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject

+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (_Bool)tablesAreAllowed;
+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (_Bool)escherIsFullySupported;
+ (void)readEshClientAnchor:(const struct XlEshClientAnchor *)arg1 targetClientData:(id)arg2 state:(id)arg3;
+ (void)setAutoInsetForShape:(struct EshShape *)arg1;

@end
