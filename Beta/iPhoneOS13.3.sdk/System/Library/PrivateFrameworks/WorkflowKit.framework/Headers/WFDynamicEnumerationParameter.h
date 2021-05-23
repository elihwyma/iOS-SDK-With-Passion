/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSError;

@protocol WFDynamicEnumerationDataSource;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter

{
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
    id <WFDynamicEnumerationDataSource> _dataSource;
    unsigned long long _possibleStatesLoadingState;
    unsigned long long _defaultValueLoadingState;
    NSError *_possibleStatesLoadingError;
}

@property (nonatomic) unsigned long long possibleStatesLoadingState;
@property (nonatomic) unsigned long long defaultValueLoadingState;
@property (retain, nonatomic) NSError *possibleStatesLoadingError;
@property (retain, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) id <WFDynamicEnumerationDataSource> dataSource;

- (_Bool)isAsynchronous;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)accessoryColorForPossibleState:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)possibleStatesDidChange;
- (_Bool)alwaysShowsButton;
- (void)defaultSerializedRepresentationDidChange;
- (id)defaultSerializedRepresentation;
- (_Bool)allowsMultipleValues;
- (void)clearPossibleStates;
- (void)loadPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
