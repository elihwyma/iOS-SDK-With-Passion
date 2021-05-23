/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class NSCalendar, NSString;

@protocol ACHTemplateSourceDelegate;

@interface ACHPerfectMonthTemplateSource : NSObject

{
    NSCalendar *_utcGregorianCalendar;
}

@property (retain, nonatomic) NSCalendar *utcGregorianCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;

- (id)init;
- (_Bool)sourceShouldRunForDate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthStringFromTemplateName:(id)arg1;

@end
