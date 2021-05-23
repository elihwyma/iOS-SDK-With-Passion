/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFPasswordAccount : WFAccount

{
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

+ (id)accountWithUsername:(id)arg1 password:(id)arg2;

- (_Bool)isValid;
- (id)localizedName;

@end
