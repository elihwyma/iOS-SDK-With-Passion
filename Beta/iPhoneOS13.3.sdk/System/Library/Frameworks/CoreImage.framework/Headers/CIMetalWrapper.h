/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter

{
    NSMutableDictionary *_dict;
    NSString *inputFilterName;
}

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)attributes;
- (id)outputImage;
- (id)inputKeys;
- (id)dummyImagesForImages:(id)arg1;

@end
