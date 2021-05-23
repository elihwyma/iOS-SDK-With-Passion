/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject

{
    id <CDPDCircleProxy> _circleProxy;
}

@property (retain, nonatomic) id <CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isManateeAvailable:(id *)arg1;
- (_Bool)isPrimaryAccountHSA2;
- (_Bool)_checkSecurityEligibility:(id *)arg1;
- (void)_didCreateCircleProxy;
- (void)reportManateeAvailable;
- (void)reportManateeUnavailable;
- (void)_sendNotification:(const char *)arg1 withValue:(unsigned long long)arg2;
- (void)securityLevelChanged:(_Bool)arg1;
- (void)circleStatusChanged;
- (void)circleViewStatusChanged;

@end
