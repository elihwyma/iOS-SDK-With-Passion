/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction

{
    MWFeedParser *_parser;
}

@property (retain, nonatomic) MWFeedParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
- (void)feedParserDidFinish:(id)arg1;
- (void)feedParser:(id)arg1 didFailWithError:(id)arg2;

@end
