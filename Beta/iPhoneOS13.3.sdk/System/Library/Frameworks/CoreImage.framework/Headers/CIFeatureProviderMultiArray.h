/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class MLMultiArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderMultiArray : NSObject

{
    MLMultiArray *multiArray;
    NSString *name;
}

@property (retain, nonatomic) MLMultiArray *multiArray;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithName:(id)arg1 array:(id)arg2;

@end
