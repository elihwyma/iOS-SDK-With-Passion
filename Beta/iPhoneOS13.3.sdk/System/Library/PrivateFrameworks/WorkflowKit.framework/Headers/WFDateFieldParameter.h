/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter

{
    _Bool _detectsAllDayDates;
    _Bool _forcesAllDayDates;
    NSDateFormatter *_hintDateFormatter;
    NSString *_reactiveParameterKey;
    NSString *_hintDateMode;
}

@property (nonatomic, readonly) NSDateFormatter *hintDateFormatter;
@property (nonatomic, readonly) NSString *hintDateMode;
@property (nonatomic, readonly) NSString *reactiveParameterKey;
@property (nonatomic, readonly) NSString *localizedIncompleteHintString;
@property (nonatomic, readonly) _Bool timeOnlyMode;
@property (nonatomic, readonly) _Bool dateOnlyMode;
@property (nonatomic, readonly) _Bool detectsAllDayDates;
@property (nonatomic) _Bool forcesAllDayDates;

- (id)initWithDefinition:(id)arg1;
- (id)hintForState:(id)arg1;

@end
