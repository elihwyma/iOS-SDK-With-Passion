/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFModuleSummaryTemplateBuilder : NSObject

{
    NSString *_formatString;
    NSArray *_formatItems;
    NSArray *_parameterKeys;
}

@property (retain, nonatomic) NSArray *formatItems;
@property (copy, nonatomic) NSArray *parameterKeys;
@property (copy, nonatomic, readonly) NSString *formatString;

+ (id)slotsForMultipleParameterState:(id)arg1 inParameter:(id)arg2;
+ (_Bool)formatString:(id)arg1 containsParameterKey:(id)arg2;

- (id)initWithFormatString:(id)arg1;
- (void)itemizeFormatStringIfNeeded;
- (id)contentByEnumeratingSummaryWithParameterSlotBuilder:(CDUnknownBlockType)arg1;
- (id)buildContentWithParameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 variableBeingEdited:(id)arg4;

@end
