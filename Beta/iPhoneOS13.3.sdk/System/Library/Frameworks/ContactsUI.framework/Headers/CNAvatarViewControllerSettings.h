/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, PRPersonaStore;

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarViewControllerSettings : NSObject

{
    _Bool _threeDTouchEnabled;
    CNContactStore *_contactStore;
    unsigned long long _style;
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNUILikenessRendering> _likenessRenderer;
    id <CNSchedulerProvider> _schedulerProvider;
    PRPersonaStore *_personaStore;
}

@property (retain, nonatomic) id <CNUIPRLikenessResolver> likenessResolver;
@property (retain, nonatomic) id <CNUILikenessRendering> likenessRenderer;
@property (retain, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) _Bool threeDTouchEnabled;
@property (nonatomic) unsigned long long style;

+ (id)defaultSettings;
+ (id)settingsWithContactStore:(id)arg1;
+ (_Bool)threeDTouchEnabledDefaultValue;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)arg1 threeDTouchEnabled:(_Bool)arg2;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(_Bool)arg3;
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(_Bool)arg2;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 threeDTouchEnabled:(_Bool)arg3;
+ (id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(_Bool)arg4 schedulerProvider:(id)arg5;

- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(_Bool)arg4 schedulerProvider:(id)arg5;

@end
