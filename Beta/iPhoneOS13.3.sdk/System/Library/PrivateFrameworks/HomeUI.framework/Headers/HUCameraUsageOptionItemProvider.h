/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraUsageOptionItemProvider : HFItemProvider

{
    NSMutableSet *_items;
    unsigned long long _presenceEventType;
    unsigned long long _displayStyle;
    NSSet *_cameraProfiles;
}

@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (copy, nonatomic, readonly) NSSet *cameraProfiles;

- (id)init;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithPresenceEventType:(unsigned long long)arg1 cameraProfiles:(id)arg2;

@end
