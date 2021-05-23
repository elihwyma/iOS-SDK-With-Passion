/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage

{
    AKDevice *_proxyDevice;
}

@property (retain, nonatomic) AKDevice *proxyDevice;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
