/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDialogAction, AMSMetricsEvent, NSArray, NSDictionary, NSString, NSURL;

@interface AMSDialogRequest : NSObject

{
    NSArray *_buttonActions;
    AMSDialogAction *_defaultAction;
    NSURL *_iconBundleURL;
    NSString *_identifier;
    NSString *_logKey;
    NSString *_message;
    AMSMetricsEvent *_metricsEvent;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) AMSDialogAction *defaultAction;
@property (copy, nonatomic) NSURL *iconBundleURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithTitle:(id)arg1 message:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)addButtonAction:(id)arg1;
- (void)addTextField:(id)arg1;
- (id)locateActionWithIdentifier:(id)arg1;

@end
