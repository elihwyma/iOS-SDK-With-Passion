/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class FCFeedGroup, NSString;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation

{
    CDUnknownBlockType _headlineFilter;
    NSString *_articleList;
    FCFeedGroup *_group;
}

@property (nonatomic, readonly) NSString *articleList;
@property (nonatomic, readonly) FCFeedGroup *group;
@property (copy, nonatomic) CDUnknownBlockType headlineFilter;

- (void)performOperation;
- (id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3;

@end
