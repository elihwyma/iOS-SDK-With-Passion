/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLDeviceAuthentication : NSObject

{
    NSString *_sessionUUID;
}

@property (nonatomic, readonly) NSString *sessionUUID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
