/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRendererSettings : NSObject

{
    unsigned long long _style;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNUILikenessRendering> _likenessRenderer;
}

@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic, readonly) id <CNUILikenessRendering> likenessRenderer;
@property (nonatomic) unsigned long long style;

+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)arg1;
+ (id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(unsigned long long)arg1;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2;
+ (id)settingsWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3 concurrentCaches:(_Bool)arg4;

- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3;

@end
