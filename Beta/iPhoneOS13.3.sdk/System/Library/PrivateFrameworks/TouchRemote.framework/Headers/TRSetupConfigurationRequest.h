/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage

{
    NSString *_deviceName;
}

@property (copy, nonatomic) NSString *deviceName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
