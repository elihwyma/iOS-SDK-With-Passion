/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, UISApplicationStateClient;

@interface UISApplicationState : NSObject

{
    NSString *_bundleIdentifier;
    UISApplicationStateClient *_client;
}

@property (nonatomic, setter=_setUsesBackgroundNetwork:) _Bool _usesBackgroundNetwork;
@property (nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
@property (copy, nonatomic) id badgeValue;

- (id)init;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initForCurrentApplication;
- (void)_setMinimumBackgroundFetchInterval:(double)arg1;

@end
