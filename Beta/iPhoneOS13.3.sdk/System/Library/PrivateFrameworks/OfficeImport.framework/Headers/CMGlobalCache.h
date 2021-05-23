/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMGlobalCache : NSObject

+ (id)colorPropertyCache;
+ (id)lengthPropertyCache;
+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStylesheetCache;
+ (id)drawableElementCache;
+ (void)initGlobalCache;
+ (void)releaseGlobalCache;

@end
