/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@interface SearchUITLKImageConverter : NSObject

+ (id)imageForSFImage:(id)arg1;
+ (id)imageForSFImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)imageIsProbablyOpaque:(id)arg1;
+ (void)executeBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;
+ (_Bool)checkTransparencyForImageAtCorners:(id)arg1;
+ (_Bool)hasTransparencyAtPoint:(struct CGPoint)arg1 forImage:(id)arg2;
+ (id)imagesForSFImages:(id)arg1;

@end
