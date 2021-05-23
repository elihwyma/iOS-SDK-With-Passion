/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMMutationRuleSet : NSObject

{
    NSArray *_mutationRules;
    NSSet *_dependentPathStrings;
}

@property (copy, nonatomic, readonly) NSArray *mutationRules;
@property (copy, nonatomic, readonly) NSSet *dependentPathStrings;

- (id)initWithMutationRules:(id)arg1;

@end
