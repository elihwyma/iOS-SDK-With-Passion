/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelInput : NSObject

{
    struct __CVBuffer *_data;
}

@property (nonatomic) struct __CVBuffer *data;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)initWithData:(struct __CVBuffer *)arg1;
- (id)featureValueForName:(id)arg1;

@end
