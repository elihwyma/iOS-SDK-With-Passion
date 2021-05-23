/*
 Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

#import <Foundation/NSObject.h>

@protocol ACCiAP2ShimServerDelegate;

@interface ACCiAP2ShimServerDelegateInfo : NSObject

{
    id <ACCiAP2ShimServerDelegate> _delegate;
}

@property (readonly) id <ACCiAP2ShimServerDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
