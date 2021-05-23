/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface durationModelOutput : NSObject

{
    double _duration_pred;
}

@property (nonatomic) double duration_pred;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithDuration_pred:(double)arg1;

@end
