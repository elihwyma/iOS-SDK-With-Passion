/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFSyntaxHighlightToken : NSObject

{
    _Bool _overflows;
    int _start;
    int _length;
    NSString *_string;
}

@property _Bool overflows;
@property (retain) NSString *string;
@property int start;
@property int length;

+ (id)constructToken;

- (id)description;
- (struct _NSRange)range;

@end
