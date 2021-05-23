/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupsOperation : FCOperation

{
    FCFeedViewport *_viewport;
    CDUnknownBlockType _groupRemovalTestBlock;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _removeGroupsCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_viewportDiff;
}

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *viewportDiff;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (copy, nonatomic) CDUnknownBlockType groupRemovalTestBlock;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) CDUnknownBlockType removeGroupsCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)arg1;

@end
