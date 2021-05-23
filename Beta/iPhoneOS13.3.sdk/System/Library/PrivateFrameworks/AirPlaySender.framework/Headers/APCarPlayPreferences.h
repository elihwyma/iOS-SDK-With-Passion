/*
 Image: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
 */

#import <Foundation/NSObject.h>

@class CRCarPlayPreferences, NSString;

@protocol APCarPlayPreferencesDelegate;

@interface APCarPlayPreferences : NSObject

{
    CRCarPlayPreferences *_preferences;
    id <APCarPlayPreferencesDelegate> _delegate;
}

@property (nonatomic) id <APCarPlayPreferencesDelegate> delegate;
@property (nonatomic, readonly, getter=isCarPlayEnabled) _Bool carPlayEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleCarPlayAllowedDidChange;

@end
