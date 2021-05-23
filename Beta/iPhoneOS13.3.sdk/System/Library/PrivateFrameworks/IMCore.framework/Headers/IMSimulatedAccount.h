/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface IMSimulatedAccount : IMAccount

{
    IMHandle *_loginHandle;
}

@property (retain, nonatomic) IMHandle *loginHandle;

- (_Bool)isConnected;
- (_Bool)isOperational;
- (id)loginIMHandle;
- (_Bool)supportsRegistration;

@end
