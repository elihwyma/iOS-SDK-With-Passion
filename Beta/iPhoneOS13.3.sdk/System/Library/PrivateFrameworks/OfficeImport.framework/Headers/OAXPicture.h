/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXPicture : NSObject

+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualPropertiesFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toDrawable:(id)arg3 drawingState:(id)arg4;
+ (void)mapImageWithGifAsMovie:(id)arg1 xmlNode:(struct _xmlNode *)arg2 drawingState:(id)arg3;
+ (id)GifSubBlip:(id)arg1 drawingState:(id)arg2;

@end
