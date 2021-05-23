/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol HFHomeKitSettingsVendor;

@interface HFHomeKitSettingsAdapterManager : NSObject

{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSMutableDictionary *_adaptersByID;
}

@property (weak, nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic, readonly) NSMutableDictionary *adaptersByID;

- (id)init;
- (id)adapterForIdentifier:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1;
- (id)_createAdapterForIdentifier:(id)arg1;

@end
