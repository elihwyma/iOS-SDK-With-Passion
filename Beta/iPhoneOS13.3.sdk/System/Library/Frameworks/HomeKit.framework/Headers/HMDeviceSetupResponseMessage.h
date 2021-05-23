/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <TouchRemote/TRResponseMessage.h>

@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage

{
    NSData *_payload;
}

@property (copy, nonatomic, readonly) NSData *payload;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end
