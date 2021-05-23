/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface iconclassification__generated__Output : NSObject

{
    NSDictionary *_output1;
    NSString *_classLabel;
}

@property (retain, nonatomic) NSDictionary *output1;
@property (retain, nonatomic) NSString *classLabel;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithOutput1:(id)arg1 classLabel:(id)arg2;

@end
