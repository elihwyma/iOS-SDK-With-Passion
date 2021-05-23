/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol

{
    FCCKContentFetchOperation *_fetchOperation;
}

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (void)initialize;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)unregister;
+ (id)excerptURLForArticleID:(id)arg1 changeTag:(id)arg2;
+ (void)setupWithArticleDatabase:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
