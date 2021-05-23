/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, TUPhoneNumber;

@interface TUPrivacyRule : NSObject <Swift>

{
    int _type;
    TUPhoneNumber *_phoneNumber;
    NSString *_email;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) TUPhoneNumber *phoneNumber;
@property (nonatomic, readonly) NSString *email;

+ (id)ruleForPhoneNumber:(id)arg1;
+ (id)ruleForEmail:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForPhoneNumber:(id)arg1;
- (id)initForEmail:(id)arg1;

@end
