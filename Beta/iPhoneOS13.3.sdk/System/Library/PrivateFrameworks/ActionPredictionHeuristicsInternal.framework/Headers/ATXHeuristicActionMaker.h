/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXActionCriteria, NSString;

@interface ATXHeuristicActionMaker : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    ATXActionCriteria *_criteria;
    NSString *_heuristic;
}

@property (nonatomic, readonly) NSString *actionTypeName;
@property (retain, nonatomic) ATXActionCriteria *criteria;
@property (retain, nonatomic) NSString *heuristic;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)action;
- (id)_makeAction;

@end
