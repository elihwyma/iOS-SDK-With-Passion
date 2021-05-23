/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <FrontBoardServices/BSAbstractDefaultDomain.h>

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSNumber *standbyTime;
@property (retain, nonatomic) NSNumber *batteryUsageTime;
@property (nonatomic) _Bool hasChargedPartially;

- (void)_bindAndRegisterDefaults;
- (void)clearUsageDefaults;

@end
