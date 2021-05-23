/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@interface Evaluation : NSObject

{
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic) CDUnknownBlockType callback;

- (id)description;

@end
