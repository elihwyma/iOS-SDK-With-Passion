/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBModule.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CBDisplayModule : CBModule

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (id)copyIdentifiers;

@end
