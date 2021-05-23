/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBOfficeArt : NSObject

+ (void)setShapeAddress:(const struct WrdFileShapeAddress *)arg1 toDrawable:(id)arg2;
+ (void)readFrom:(id)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun *)arg3 paragraph:(id)arg4 to:(id)arg5;

@end
