/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class AXDispatchTimer, AXUIAlert, NSDictionary, NSString, UIImage;

@protocol AXUIService;

@interface AXUIAlertContext : NSObject

{
    NSString *_identifier;
    double _creationTimeInterval;
    double _fadeAnimationDuration;
    AXDispatchTimer *_showOrHideTimer;
    AXUIAlert *_alertView;
    id <AXUIService> _service;
    unsigned long long _priority;
    double _duration;
    NSString *_text;
    NSString *_subtitleText;
    UIImage *_iconImage;
    unsigned long long _type;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double creationTimeInterval;
@property (nonatomic) double fadeAnimationDuration;
@property (retain, nonatomic) AXDispatchTimer *showOrHideTimer;
@property (retain, nonatomic) AXUIAlert *alertView;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) id <AXUIService> service;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long type;

- (id)description;

@end
