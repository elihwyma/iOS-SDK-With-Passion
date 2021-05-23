/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransaction : NSObject

{
    NSString *_domain;
    NSURL *_requestURL;
    SBKRequest *_activeRequest;
    NSMutableDictionary *_userInfo;
}

@property (retain) NSMutableDictionary *userInfo;
@property (copy, readonly) NSString *domain;
@property (retain) NSURL *requestURL;
@property (retain) SBKRequest *activeRequest;

- (id)init;
- (id)newRequest;
- (id)clampsKey;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)transactionContextForKey:(id)arg1;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;

@end
