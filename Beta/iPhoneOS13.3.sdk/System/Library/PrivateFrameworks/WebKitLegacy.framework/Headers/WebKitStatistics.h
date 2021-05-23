/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebKitStatistics : NSObject

+ (int)frameCount;
+ (int)viewCount;
+ (int)webViewCount;
+ (int)dataSourceCount;
+ (int)bridgeCount;
+ (int)HTMLRepresentationCount;

@end
