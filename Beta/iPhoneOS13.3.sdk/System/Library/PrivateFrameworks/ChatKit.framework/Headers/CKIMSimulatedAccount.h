/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMAccount.h>

@class IMHandle;

__attribute__((visibility("hidden")))
@interface CKIMSimulatedAccount : IMAccount

{
    IMHandle *_loginHandle;
}

@property (retain, nonatomic) IMHandle *loginHandle;

- (id)loginIMHandle;

@end
