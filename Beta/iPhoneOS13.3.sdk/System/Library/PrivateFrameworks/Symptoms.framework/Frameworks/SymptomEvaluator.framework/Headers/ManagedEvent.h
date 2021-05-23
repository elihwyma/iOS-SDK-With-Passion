/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class DecisionDetails;

__attribute__((visibility("hidden")))
@interface ManagedEvent : NSObject

{
    unsigned long long _id_number;
    DecisionDetails *_details;
}

@property (nonatomic) unsigned long long id_number;
@property (retain, nonatomic) DecisionDetails *details;

- (id)description;
- (id)initWithId:(unsigned long long)arg1 details:(id)arg2;
- (void)serializeToXPCObject:(id)arg1;

@end
