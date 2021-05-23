/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SORealmSettingManager : NSObject

{
    NSMutableDictionary *_realmSettings;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (retain, nonatomic) NSMutableDictionary *realmSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;

- (id)init;
- (void)dealloc;
- (void)loadRealmSettings;
- (void)saveRealmSettings;
- (id)settingsForRealm:(id)arg1;
- (void)removeRealm:(id)arg1;

@end
