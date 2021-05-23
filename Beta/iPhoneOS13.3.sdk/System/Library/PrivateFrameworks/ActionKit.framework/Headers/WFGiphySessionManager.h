/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession;

@interface WFGiphySessionManager : NSObject

{
    NSURLSession *_session;
    NSString *_apiKey;
    NSURL *_baseURL;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic) NSString *apiKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)random:(CDUnknownBlockType)arg1;
- (void)trendingWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)search:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRequestWithPath:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
