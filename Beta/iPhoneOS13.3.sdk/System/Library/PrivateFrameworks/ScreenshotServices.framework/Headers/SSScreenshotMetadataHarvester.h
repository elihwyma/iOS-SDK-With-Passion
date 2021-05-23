/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@interface SSScreenshotMetadataHarvester : NSObject

+ (void)harvestScreenshotMetadataAndRespondToAction:(id)arg1;
+ (void)_crawlViewController:(id)arg1 executingBlock:(CDUnknownBlockType)arg2;
+ (void)_crawlView:(id)arg1 executingBlock:(CDUnknownBlockType)arg2;
+ (id)_screenshotServiceForWindowScene:(id)arg1 wantsPrivateDelegate:(_Bool)arg2;
+ (id)_applicationScreenshotServiceWithPrivateDelegate:(_Bool)arg1;
+ (id)screenshotServiceWithIdentifier:(id)arg1;
+ (id)_screenshotServicesDelegateWithIdentifier:(id)arg1;
+ (id)_contentRectsForMetadata;
+ (_Bool)canGenerateDocumentForIdentifier:(id)arg1;
+ (void)sendResponseForAction:(id)arg1 withObject:(id)arg2 forKey:(unsigned long long)arg3;
+ (void)_grabUserActivityTitleWithCallback:(CDUnknownBlockType)arg1;
+ (void)_grabPDFRepresentationForIdentifier:(id)arg1 withCallback:(CDUnknownBlockType)arg2;

@end
