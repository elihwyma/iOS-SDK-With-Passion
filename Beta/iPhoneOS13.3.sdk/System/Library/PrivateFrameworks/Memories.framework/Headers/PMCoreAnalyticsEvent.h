/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMCoreAnalyticsEvent : NSObject

{
    _Bool _appendBundleName;
}

@property (nonatomic) _Bool appendBundleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bundleForAnalytics;

- (id)eventName;
- (id)eventPayload;
- (void)sendToCoreAnalytics;

@end
