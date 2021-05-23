/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMetricsEvent, NSMutableDictionary, NSString, NSURL, NSURLRequest;

@interface AMSDialogAction : NSObject

{
    _Bool _inferLinkDestination;
    _Bool _shouldRetry;
    NSURL *_deepLink;
    NSString *_identifier;
    AMSMetricsEvent *_metricsEvent;
    NSURLRequest *_request;
    long long _style;
    NSString *_title;
    NSMutableDictionary *_userInfo;
}

@property (nonatomic, setter=ams_setActionType:) long long ams_actionType;
@property (retain, nonatomic, setter=ams_setSubtarget:) NSString *ams_subtarget;
@property (nonatomic, setter=ams_setURLType:) long long ams_URLType;
@property (copy, nonatomic) NSURL *deepLink;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool inferLinkDestination;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (copy, nonatomic) NSURLRequest *request;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSMutableDictionary *userInfo;
@property (nonatomic) _Bool shouldRetry;

+ (_Bool)supportsSecureCoding;
+ (id)actionWithTitle:(id)arg1 identifier:(id)arg2;
+ (id)actionWithTitle:(id)arg1;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
