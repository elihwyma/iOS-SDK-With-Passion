/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMetricsEvent, NSDictionary, NSString, NSURL, NSURLRequest;

@interface AMSUserNotificationAction : NSObject

{
    NSString *_identifier;
    NSURL *_defaultURL;
    NSString *_title;
    NSURLRequest *_request;
    AMSMetricsEvent *_metricsEvent;
    NSDictionary *_userInfo;
    long long _style;
}

@property (nonatomic, readonly) unsigned long long un_ActionOptions;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long style;

- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithUserInfoAction:(id)arg1;
- (id)generateUserInfoAction;

@end
