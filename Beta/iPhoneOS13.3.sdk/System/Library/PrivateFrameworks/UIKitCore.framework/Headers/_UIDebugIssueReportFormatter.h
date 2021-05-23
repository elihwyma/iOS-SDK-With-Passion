/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDebugReportFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter

{
    NSString *_header;
    NSString *_footer;
    NSString *_noIssuesDescription;
    NSString *_defaultIssuePrefix;
}

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *noIssuesDescription;
@property (copy, nonatomic) NSString *defaultIssuePrefix;

- (id)init;
- (id)stringFromReport:(id)arg1;
- (id)_componentsFromReport:(id)arg1;

@end
