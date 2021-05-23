/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <ActivityAchievementsDaemon/Swift-Protocol.h>

@class NSObject, NSString;

@protocol ACHTemplateSourceDelegate;

@protocol ACHTemplateSource <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;

- (unsigned short)sourceShouldRunForDate: /* Error: Ran out of types for this method. */;
- (unsigned short)templatesForDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)localizationBundleURLForTemplate: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceBundleURLForTemplate: /* Error: Ran out of types for this method. */;
- (unsigned short)propertyListBundleURLForTemplate: /* Error: Ran out of types for this method. */;
- (unsigned short)stickerBundleURLForTemplate: /* Error: Ran out of types for this method. */;

@end
