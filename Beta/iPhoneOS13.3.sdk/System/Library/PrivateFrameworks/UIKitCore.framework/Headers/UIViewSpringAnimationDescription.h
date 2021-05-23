/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationDescription : NSObject

{
    _Bool _usesDampingRatioAndResponse;
    double _tension;
    double _friction;
    CDStruct_6c8af1d9 _parameters;
}

@property (nonatomic) _Bool usesDampingRatioAndResponse;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) CDStruct_6c8af1d9 parameters;

+ (id)descriptionWithTension:(double)arg1 friction:(double)arg2;
+ (id)descriptionWithSpringAnimationParameters:(CDStruct_6c8af1d9)arg1;

@end
