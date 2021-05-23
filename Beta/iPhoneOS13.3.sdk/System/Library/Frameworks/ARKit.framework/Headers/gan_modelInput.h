/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface gan_modelInput : NSObject

{
    MLMultiArray *_input;
}

@property (retain, nonatomic) MLMultiArray *input;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithInput:(id)arg1;

@end
