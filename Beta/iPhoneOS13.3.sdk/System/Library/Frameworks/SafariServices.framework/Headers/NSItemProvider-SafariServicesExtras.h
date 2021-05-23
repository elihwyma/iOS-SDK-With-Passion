/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (SafariServicesExtras)

+ (void)_sf_loadObjectsFromItemProviders:(id)arg1 usingLoader:(CDUnknownFunctionPointerType)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)_sf_loadObjectOfClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sf_registerFileRepresentationForQuickLookDocument:(id)arg1;

@end
