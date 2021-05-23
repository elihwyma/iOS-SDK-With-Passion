/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVAnalytics : NSObject

+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 error:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 payloadDict:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1;

@end
