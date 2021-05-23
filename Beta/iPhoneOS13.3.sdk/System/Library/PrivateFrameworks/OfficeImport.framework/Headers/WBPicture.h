/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WBOfficeArt.h>

__attribute__((visibility("hidden")))
@interface WBPicture : WBOfficeArt

+ (void)readFrom:(id)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun *)arg3 paragraph:(id)arg4 to:(id)arg5;
+ (id)readDrawableFromReader:(id)arg1 textType:(int)arg2;

@end
