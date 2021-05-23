/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUOneUpSuggestionsProvider : NSObject

+ (id)defaultProviderWithAccessoryViewControllersManager:(id)arg1;

- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;

@end
