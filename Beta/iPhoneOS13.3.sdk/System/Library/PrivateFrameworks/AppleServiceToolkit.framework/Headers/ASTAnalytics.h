/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@interface ASTAnalytics : NSObject

+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 error:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 payloadDict:(id)arg2;

@end
