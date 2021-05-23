/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class NSString;

@protocol WFSyntaxHighlightToken <Swift>

@property _Bool overflows;
@property (retain) NSString *string;
@property int start;
@property int length;

+ (unsigned short)constructToken;

@end
