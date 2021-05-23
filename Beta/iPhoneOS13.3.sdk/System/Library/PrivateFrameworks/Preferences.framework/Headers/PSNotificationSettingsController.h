/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class BBSettingsGateway, NSDictionary;

@protocol OS_dispatch_queue;

@interface PSNotificationSettingsController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    BBSettingsGateway *_gateway;
    NSDictionary *_sectionInfosByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)allSectionInfoIdentifiers;
- (id)sectionInfoForIdentifier:(id)arg1;

@end
