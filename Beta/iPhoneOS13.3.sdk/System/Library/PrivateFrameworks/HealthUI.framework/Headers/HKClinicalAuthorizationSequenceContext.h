/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource, NSString;

@interface HKClinicalAuthorizationSequenceContext : NSObject

{
    HKClinicalSourceAuthorizationController *_authorizationController;
    NSString *_readUsageDescription;
    HKSource *_source;
}

@property (retain, nonatomic) HKClinicalSourceAuthorizationController *authorizationController;
@property (copy, nonatomic) NSString *readUsageDescription;
@property (copy, nonatomic) HKSource *source;

@end
