/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Intents/INImage.h>

@interface INImage (IntentsUI)

+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (struct CGSize)imageSizeForIntentResponse:(id)arg1;

- (void)fetchUIImageWithCompletion:(CDUnknownBlockType)arg1;

@end
