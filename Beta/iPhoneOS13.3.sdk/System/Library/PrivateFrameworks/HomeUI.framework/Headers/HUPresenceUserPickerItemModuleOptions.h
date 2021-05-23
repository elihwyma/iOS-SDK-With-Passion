/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserPickerItemModuleOptions : NSObject

{
    _Bool _customLocationSelected;
    HUPresenceCurrentUserLocationDevice *_locationDevice;
}

@property (nonatomic, readonly) HUPresenceCurrentUserLocationDevice *locationDevice;
@property (nonatomic, readonly) _Bool customLocationSelected;

- (id)initWithLocationDevice:(id)arg1 customLocationSelected:(_Bool)arg2;

@end
