/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SymptomSet : NSObject

{
    NSMutableArray *symptoms;
}

@property (retain, nonatomic) NSMutableArray *symptoms;

- (id)description;

@end
