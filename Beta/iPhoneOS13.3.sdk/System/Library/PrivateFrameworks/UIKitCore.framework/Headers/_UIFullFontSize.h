/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFullFontSize : NSObject

{
    double _value;
    _Bool _isDefault;
    _Bool _needsEvaluation;
}

+ (id)defaultValue;
+ (id)valued:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)setNeedsEvaluation;
- (_Bool)needsEvaluation;
- (double)valueWithEvaluationIfNeeded:(CDUnknownBlockType)arg1;
- (id)overrideUnlessDefault:(double)arg1;
- (id)initWithValue:(double)arg1 isDefault:(_Bool)arg2;

@end
