/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface MNAudioOutputSetting : NSObject

{
    NSSet *_pickableRoutes;
    _Bool _selected;
    _Bool _selectedForSystem;
    _Bool _hfpPreference;
}

@property (nonatomic) _Bool selectedForSystem;
@property (nonatomic, readonly) _Bool hfpPreference;

+ (_Bool)supportsSecureCoding;
+ (id)macAddressForRoute:(id)arg1;
+ (_Bool)isBluetoothRoute:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)macAddress;
- (void)setSelected:(_Bool)arg1;
- (id)routeUID;
- (_Bool)isPicked;
- (void)setPicked:(_Bool)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (id)pickableRouteForHFPPreference:(_Bool)arg1;
- (_Bool)settingForBluetoothDevice;
- (_Bool)_isHFPRoute:(id)arg1;
- (_Bool)selectedForRouteSelection:(unsigned long long)arg1;
- (_Bool)settingForBluetoothComboDevice;
- (_Bool)settingSupportsBluetoothHFP;
- (_Bool)_isPicked:(id)arg1;
- (_Bool)_pickRoute:(id)arg1;
- (void)setHfpPreference:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 shouldSetHFPPreference:(_Bool)arg2;
- (id)initWithPickableRoute:(id)arg1;
- (_Bool)containsPickableRoute:(id)arg1;
- (_Bool)isEqualToSetting:(id)arg1;
- (_Bool)settingForDefaultRoute;
- (_Bool)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1;
- (_Bool)pickedStateConsistentWithHFPPreference;

@end
