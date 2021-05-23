/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@protocol SKUIJSDOMFeatureCollectionAppBridge;

__attribute__((visibility("hidden")))
@interface SKUIJSDOMFeatureCollection : IKJSObject

{
    id <SKUIJSDOMFeatureCollectionAppBridge> _appBridge;
}

@property (weak, nonatomic) id <SKUIJSDOMFeatureCollectionAppBridge> appBridge;

- (void)setEditing:(_Bool)arg1:(id)arg2;

@end
