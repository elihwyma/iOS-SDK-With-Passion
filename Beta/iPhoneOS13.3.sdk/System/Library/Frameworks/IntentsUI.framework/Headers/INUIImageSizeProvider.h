/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface INUIImageSizeProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDStruct_c3b9c2ee)imageSizeForImage:(id)arg1;
+ (id)downscaledPNGImageForImage:(id)arg1 size:(CDStruct_c3b9c2ee)arg2 error:(id *)arg3;

@end
