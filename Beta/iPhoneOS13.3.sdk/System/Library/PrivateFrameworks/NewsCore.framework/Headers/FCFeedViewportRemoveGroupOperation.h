/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff, NSString;

@interface FCFeedViewportRemoveGroupOperation : FCOperation

{
    FCFeedViewport *_viewport;
    NSString *_groupID;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _removeGroupCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_viewportDiff;
}

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *viewportDiff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) CDUnknownBlockType removeGroupCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)arg1;

@end
