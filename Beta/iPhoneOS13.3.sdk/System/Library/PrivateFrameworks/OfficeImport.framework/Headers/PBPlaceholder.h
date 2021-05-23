/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBPlaceholder : NSObject

+ (int)placeholderTypeFromTextType:(int)arg1;
+ (int)readPlaceholderType:(int)arg1;
+ (int)readPlaceholderSize:(int)arg1;
+ (int)readPlaceholderOrientation:(int)arg1;
+ (_Bool)isBodyPlaceholder:(int)arg1;
+ (_Bool)isTitlePlaceholder:(int)arg1;
+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg2 isMaster:(_Bool)arg3 isNotes:(_Bool)arg4;

@end
