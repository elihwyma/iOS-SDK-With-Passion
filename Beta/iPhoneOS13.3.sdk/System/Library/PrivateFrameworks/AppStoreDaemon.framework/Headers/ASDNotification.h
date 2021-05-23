/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ASDNotification : NSObject <Swift>

{
    NSString *_name;
    NSDictionary *_userInfo;
}

@property (readonly) NSString *name;
@property (readonly) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)notificationWithName:(id)arg1 userInfo:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;

@end
