/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface SignificantActivityInput : NSObject

{
    struct __CVBuffer *_image__Placeholder__0;
}

@property (nonatomic) struct __CVBuffer *image__Placeholder__0;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithImage__Placeholder__0:(struct __CVBuffer *)arg1;

@end
