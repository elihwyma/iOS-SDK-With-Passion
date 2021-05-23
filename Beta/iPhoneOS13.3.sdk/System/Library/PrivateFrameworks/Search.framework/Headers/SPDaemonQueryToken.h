/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSString, SPSearchQuery;

@protocol OS_dispatch_queue, SPDaemonQueryDelegate;

@interface SPDaemonQueryToken : NSObject

{
    unsigned int _queryID;
    SPSearchQuery *_query;
    id <SPDaemonQueryDelegate> _delegate;
    _Bool _queryFinished;
    _Bool _gotQueryComplete;
    _Bool _didReissue;
    _Bool _isLocalQuery;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_fbq;
    NSString *_web_fbq;
}

@property (weak, nonatomic, readonly) id <SPDaemonQueryDelegate> delegate;
@property (nonatomic, readonly) unsigned int queryID;
@property (nonatomic, readonly) SPSearchQuery *query;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property _Bool queryFinished;
@property (readonly) NSString *fbq;
@property (readonly) NSString *web_fbq;
@property (nonatomic, readonly) _Bool gotQueryComplete;
@property (nonatomic) _Bool didReissue;
@property (nonatomic) _Bool isLocalQuery;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)handleMessage:(id)arg1;
- (void)queryDidComplete;
- (id)initWithQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)handleLocalQueryWithResultSet:(id)arg1;

@end
