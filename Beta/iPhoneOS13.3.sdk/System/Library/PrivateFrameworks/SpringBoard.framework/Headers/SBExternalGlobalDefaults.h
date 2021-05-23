/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@class NSArray, NSString;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSArray *languages;
@property (retain, nonatomic) NSArray *keyboards;

+ (_Bool)__useDynamicMethodResolution;

- (id)init;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;
- (void)flushExternalCaches;

@end
