/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol

{
    FCCKContentFetchOperation *_fetchOperation;
}

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)unregister;
+ (id)URLForRecordID:(id)arg1 fieldName:(id)arg2;
+ (void)setupWithArticleDatabase:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
