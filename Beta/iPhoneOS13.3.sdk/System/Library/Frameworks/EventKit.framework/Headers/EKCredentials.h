/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EKCredentials : NSObject

{
    NSString *_username;
    NSString *_password;
}

@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *password;

+ (id)credentialsWithUsername:(id)arg1 password:(id)arg2;

- (id)description;

@end
