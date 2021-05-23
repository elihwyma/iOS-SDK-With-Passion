/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FPUIAuthenticationCredentials : NSObject

{
    unsigned long long _type;
    NSString *_username;
    NSString *_password;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

@end
