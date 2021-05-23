/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSExpression, NSString;

@interface VSExpressionEvaluator : NSObject

{
    _Bool _monitoringForChanges;
    _Bool _hasDeterminedValue;
    NSDictionary *_substitutionVariables;
    NSExpression *_expression;
    id _object;
    id _value;
    NSArray *_observers;
}

@property (retain, nonatomic) id value;
@property (nonatomic, getter=isMonitoringForChanges) _Bool monitoringForChanges;
@property (copy, nonatomic) NSArray *observers;
@property (nonatomic) _Bool hasDeterminedValue;
@property (copy, nonatomic) NSExpression *expression;
@property (nonatomic) id object;
@property (copy, nonatomic) NSDictionary *substitutionVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversOfValue;

- (void)dealloc;
- (void)observeChange:(id)arg1 forObservance:(id)arg2;
- (void)_stopMonitoringForChanges;
- (id)_observersForExpression:(id)arg1;
- (id)_observersForPredicate:(id)arg1;
- (void)_updateComputedResult:(id)arg1;
- (void)_startMonitoringForChanges;
- (void)_updateComputedResultIfNeeded;

@end
