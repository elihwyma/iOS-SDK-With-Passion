/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface NSObject (MPTimeMakerHelper)

+ (id)requiredStoreLibraryPersonalizationProperties;

- (void)__crossedTimeMarkerNotification:(id)arg1;
- (void)registerForTimeMarkerNotificationsIfNecessaryForPlayer:(id)arg1;
- (void)unregisterForTimeMarkerNotifications;
- (id)MP_shortDescription;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;

@end
