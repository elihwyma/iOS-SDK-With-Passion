/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXLegacyText : NSObject

+ (struct PptTextMasterStyleAtom *)textMasterStyleOfType:(int)arg1 state:(id)arg2;
+ (void)readLegacyTextGlobalsFromData:(id)arg1 state:(id)arg2;
+ (void)readLegacyTextFromData:(id)arg1 toShape:(id)arg2 state:(id)arg3;

@end
