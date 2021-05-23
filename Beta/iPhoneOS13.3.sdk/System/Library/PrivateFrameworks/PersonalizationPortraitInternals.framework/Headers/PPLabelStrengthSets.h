/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PPLabelStrengthSets : NSObject

{
    NSSet *_weak;
    NSSet *_strong;
}

@property (nonatomic, readonly) NSSet *weak;
@property (nonatomic, readonly) NSSet *strong;

+ (id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2;

- (id)initWithWeakSet:(id)arg1 strongSet:(id)arg2;

@end
