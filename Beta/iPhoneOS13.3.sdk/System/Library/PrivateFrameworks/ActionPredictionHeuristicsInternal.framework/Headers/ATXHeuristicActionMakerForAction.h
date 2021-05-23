/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker

{
    ATXAction *_action;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)_makeAction;
- (id)actionTypeName;

@end
