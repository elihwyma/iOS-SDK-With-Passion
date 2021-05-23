/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPDFUtilities : NSObject

+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage *)arg1;
+ (id)createPDFDateString:(id)arg1;
+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary *)arg1;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary *)arg1 inArray:(struct CGPDFArray *)arg2;
+ (long long)exifOrientationOfPage:(struct CGPDFPage *)arg1;
+ (struct CGAffineTransform)flattenRotationTransformForPage:(struct CGPDFPage *)arg1 outMediaBox:(struct CGRect *)arg2 outCropBox:(struct CGRect *)arg3;

@end
