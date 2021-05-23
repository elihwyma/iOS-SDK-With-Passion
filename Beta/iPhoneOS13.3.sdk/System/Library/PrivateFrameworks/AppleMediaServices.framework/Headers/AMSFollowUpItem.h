/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSMetricsEvent, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject

{
    ACAccount *_account;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    _Bool _shouldPostNotification;
    NSArray *_actions;
    long long _displayStyle;
    NSString *_informativeText;
    AMSMetricsEvent *_metricsEvent;
    NSString *_title;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) NSString *backingIdentifier;
@property (nonatomic) long long displayStyle;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *informativeText;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long priority;
@property (nonatomic) _Bool shouldPostNotification;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

+ (id)componentsFromBackingIdentifier:(id)arg1;
+ (id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2;

- (id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3;
- (id)postMetricsWithBag:(id)arg1;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)initWithFollowUpItem:(id)arg1;
- (id)generateItem;
- (_Bool)shouldOverwriteItem:(id)arg1;

@end
