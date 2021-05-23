/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLMessageParty : NSObject

{
    _Bool _isPhoneNumber;
    NSString *_address;
    NSString *_icc;
    NSString *_np;
    NSString *_ccAcNumber;
}

@property (nonatomic, readonly) _Bool isPhoneNumber;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *icc;
@property (nonatomic, readonly) NSString *np;
@property (nonatomic, readonly) NSString *ccAcNumber;

+ (id)_guessIccForNumber:(id)arg1;

- (id)description;
- (id)_initWithAddress:(id)arg1 addCountryCode:(_Bool)arg2 sqlController:(id)arg3;

@end
