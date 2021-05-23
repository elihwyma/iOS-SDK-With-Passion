/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTextBox : NSObject

+ (void)readTextFrom:(id)arg1 to:(id)arg2 chain:(unsigned short)arg3;
+ (void)readFrom:(struct WrdEshShape *)arg1 parent:(id)arg2 reader:(id)arg3;
+ (void)checkForOleObject:(id)arg1;

@end
