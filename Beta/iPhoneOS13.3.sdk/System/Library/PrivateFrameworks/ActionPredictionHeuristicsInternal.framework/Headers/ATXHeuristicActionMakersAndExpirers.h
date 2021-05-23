/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class NSArray, NSSet;

@interface ATXHeuristicActionMakersAndExpirers : NSObject

{
    NSArray *_actionMakers;
    NSSet *_expirers;
}

@property (nonatomic, readonly) NSArray *actionMakers;
@property (nonatomic, readonly) NSSet *expirers;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActionMakers:(id)arg1 expirers:(id)arg2;

@end
