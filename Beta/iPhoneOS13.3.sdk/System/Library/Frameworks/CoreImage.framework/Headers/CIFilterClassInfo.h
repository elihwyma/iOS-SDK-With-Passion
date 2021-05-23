/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassInfo : NSObject

{
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)inputKeys;
- (id)inputClasses;
- (id)outputKeys;
- (id)initWithClass:(Class)arg1;

@end
