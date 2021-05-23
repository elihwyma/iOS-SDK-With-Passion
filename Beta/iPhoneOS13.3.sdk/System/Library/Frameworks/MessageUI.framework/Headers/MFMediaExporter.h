/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@interface MFMediaExporter : NSObject

+ (id)conversionTimers;
+ (void)setConversionTimers:(id)arg1;
+ (int)exportAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
