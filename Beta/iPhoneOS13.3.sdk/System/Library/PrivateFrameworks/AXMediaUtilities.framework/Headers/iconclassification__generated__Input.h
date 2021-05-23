/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface iconclassification__generated__Input : NSObject

{
    MLMultiArray *_input_1;
}

@property (retain, nonatomic) MLMultiArray *input_1;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithInput_1:(id)arg1;

@end
