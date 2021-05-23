/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker

{
    ATXHeuristicObjectHandle *_event;
    NSString *_suggestionsInfoUniqueKey;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_makeAction;
- (id)actionTypeName;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4;

@end
