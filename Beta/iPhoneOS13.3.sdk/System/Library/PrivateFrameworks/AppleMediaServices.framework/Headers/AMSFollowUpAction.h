/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMetricsEvent, NSMutableDictionary, NSString, NSURL, NSURLRequest;

@protocol OS_dispatch_queue;

@interface AMSFollowUpAction : NSObject

{
    NSMutableDictionary *_userInfo;
    NSString *_identifier;
    NSString *_label;
    AMSMetricsEvent *_metricsEvent;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_actionQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSString *preferredClient;
@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) _Bool requiresFollowUpUI;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)initWithLabel:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2;
- (id)generateAction;
- (id)performActionsWithBag:(id)arg1 account:(id)arg2;
- (id)postMetricsWithBag:(id)arg1;
- (id)performActionsWithContract:(id)arg1 account:(id)arg2;
- (id)postMetricsWithBagContract:(id)arg1;

@end
