/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WFAction;

@protocol WFPropertyListObject;

@interface WFActionParameterSummary : NSObject

{
    NSArray *_possibleValues;
    NSString *_singleFormatString;
    WFAction *_action;
    id <WFPropertyListObject> _definition;
}

@property (weak, nonatomic) WFAction *action;
@property (copy, nonatomic, readonly) id <WFPropertyListObject> definition;
@property (copy, nonatomic, readonly) NSArray *possibleValues;
@property (copy, nonatomic, readonly) NSString *singleFormatString;

- (id)localizedFormatString;
- (id)initWithAction:(id)arg1 definition:(id)arg2;
- (id)explodedPossibleValuesForLocalization;
- (id)explodedSummaryStringWithKey:(id)arg1 value:(id)arg2;
- (id)explodedPossibleValuesForLocalizationWithParameterReplacements;
- (id)possibleValuesFromDictionary:(id)arg1;
- (id)parameterReplacedString:(id)arg1 withOverrides:(id)arg2;
- (id)placeholderForKey:(id)arg1;

@end
