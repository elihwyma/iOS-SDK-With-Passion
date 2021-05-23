/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebCoreStatistics : NSObject

+ (id)statistics;
+ (id)javaScriptRootObjectTypeCounts;
+ (unsigned long long)javaScriptProtectedGlobalObjectsCount;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long long)javaScriptObjectsCount;
+ (unsigned long long)javaScriptGlobalObjectsCount;
+ (unsigned long long)javaScriptProtectedObjectsCount;
+ (id)javaScriptObjectTypeCounts;
+ (void)garbageCollectJavaScriptObjects;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(_Bool)arg1;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(_Bool)arg1;
+ (unsigned long long)iconPageURLMappingCount;
+ (unsigned long long)iconRetainedPageURLCount;
+ (unsigned long long)iconRecordCount;
+ (unsigned long long)iconsWithDataCount;
+ (unsigned long long)cachedFontDataCount;
+ (unsigned long long)cachedFontDataInactiveCount;
+ (void)purgeInactiveFontData;
+ (unsigned long long)glyphPageCount;
+ (_Bool)shouldPrintExceptions;
+ (void)setShouldPrintExceptions:(_Bool)arg1;
+ (void)emptyCache;
+ (void)setCacheDisabled:(_Bool)arg1;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)stopIgnoringWebCoreNodeLeaks;
+ (id)memoryStatistics;
+ (void)returnFreeMemoryToSystem;
+ (int)cachedPageCount;
+ (int)cachedFrameCount;
+ (int)autoreleasedPageCount;
+ (unsigned long long)javaScriptNoGCAllowedObjectsCount;
+ (unsigned long long)javaScriptReferencedObjectsCount;
+ (id)javaScriptRootObjectClasses;
+ (unsigned long long)javaScriptInterpretersCount;

@end
