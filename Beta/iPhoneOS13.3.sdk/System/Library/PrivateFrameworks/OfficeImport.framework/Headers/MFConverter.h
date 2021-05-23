/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFConverter : NSObject

+ (id)play:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (struct CGRect)boundsInPoints:(id)arg1;
+ (_Bool)mapToPdf:(id)arg1;
+ (id)playToPDF:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToBitmap:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (struct CGRect)boundsInLogicalUnits:(id)arg1;
+ (void)fromBinary:(id)arg1 toXml:(id)arg2;
+ (void)playInCurrentContext:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;

@end
