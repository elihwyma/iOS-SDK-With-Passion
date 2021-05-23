/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXLayoutInstructions : NSObject

{
    NSArray *_instructions;
}

@property (nonatomic, readonly) NSArray *instructions;

+ (id)defaultInstructions;

- (id)description;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (_Bool)areFulfilledForBlueprint:(id)arg1;
- (id)initWithInstructions:(id)arg1;

@end
