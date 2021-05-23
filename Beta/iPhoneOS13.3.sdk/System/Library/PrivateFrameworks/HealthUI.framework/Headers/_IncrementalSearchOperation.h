/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSOperation.h>

@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation

{
    NSRegularExpression *_regularExpression;
    NSString *_searchBody;
    CDUnknownBlockType _searchResultsBlock;
    CDUnknownBlockType _searchFinishedBlock;
}

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSString *searchBody;
@property (readonly) CDUnknownBlockType searchResultsBlock;
@property (readonly) CDUnknownBlockType searchFinishedBlock;

- (void)main;
- (id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3 finishedBlock:(CDUnknownBlockType)arg4;

@end
