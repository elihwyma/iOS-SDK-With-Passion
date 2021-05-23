/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCFeedDescriptor, FCFeedViewport, NSString;

@protocol FCFeedViewportRemoveGroupOperationType <Swift>

@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) CDUnknownBlockType removeGroupCompletionHandler;

- (unsigned short)start;

@end
