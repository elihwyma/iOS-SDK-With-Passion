/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIngestionTypes : NSObject

+ (id)supportedMovieTypes;
+ (id)supportedImageTypes;
+ (id)p_unsupportedPlainTextTypes;
+ (id)p_supportedPlainTextTypes;
+ (id)supportedRichTextTypes;
+ (_Bool)isValidPlainTextUTI:(id)arg1;
+ (id)highEfficiencyImageTypes;

@end
