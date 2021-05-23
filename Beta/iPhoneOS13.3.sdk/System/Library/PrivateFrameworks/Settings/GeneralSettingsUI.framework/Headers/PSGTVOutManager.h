/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSGTVOutManager : NSObject

{
    int _connectedAdapterType;
}

- (id)init;
- (void)refreshConnectedAdapterType;
- (int)connectedAdapterType;

@end
