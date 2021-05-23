/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModelInput : NSObject

{
    MLMultiArray *_img_input;
}

@property (retain, nonatomic) MLMultiArray *img_input;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithImg_input:(id)arg1;

@end
