/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class SADeviceCarDNDHintContext;

@protocol SiriUICarDNDContextProviderDelegate;

@interface SiriUICarDNDContextProvider : NSObject

{
    id <SiriUICarDNDContextProviderDelegate> _delegate;
    SADeviceCarDNDHintContext *_hintContext;
}

@property (weak, nonatomic) id <SiriUICarDNDContextProviderDelegate> delegate;
@property (copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext;

- (_Bool)allowContextProvider:(id)arg1;
- (id)getCurrentContext;

@end
