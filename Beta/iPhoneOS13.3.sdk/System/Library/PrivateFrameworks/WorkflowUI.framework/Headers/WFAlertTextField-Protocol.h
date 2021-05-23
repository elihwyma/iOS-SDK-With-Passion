/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol WFAlertTextField <Swift>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long clearButtonMode;
@property (nonatomic) long long alertTextInputMode;
@property (copy, nonatomic) NSArray *suggestions;

+ (unsigned short)usesSuggestions;

@end
