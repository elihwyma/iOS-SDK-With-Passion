/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKImageCompare : NSObject

+ (id)stringFromSize:(struct CGSize)arg1;
+ (_Bool)saveImage:(struct CGImage *)arg1 toPath:(id)arg2;
+ (id)filterImage:(struct CGImage *)arg1;
+ (CDStruct_c5e6d23b)compareImage:(struct CGImage *)arg1 toMasterImage:(struct CGImage *)arg2 filename:(id)arg3 differenceImageOutputPath:(id)arg4 diffWhite:(_Bool)arg5 stdDevThreshhold:(double)arg6;

@end
