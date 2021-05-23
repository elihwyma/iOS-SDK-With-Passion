/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderImage : NSObject

{
    NSString *name;
    struct __CVBuffer *buffer;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct __CVBuffer *buffer;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithName:(id)arg1 buffer:(struct __CVBuffer *)arg2;

@end
