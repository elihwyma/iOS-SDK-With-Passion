/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface NSObject (IMKeyValueCollectionUserDefaultsStorage)

+ (id)_createSingleton__im;
+ (void)overrideSingletonWithObject:(id)arg1;
+ (id)singletonOverride;
+ (void)replaceSingletonWithObject:(id)arg1;
+ (void)removeSingletonOverride;
+ (id)overriddenSingleton;
+ (_Bool)isSingletonOverridden;
+ (_Bool)replaceSingletonWithSubclass:(id)arg1;
+ (_Bool)isSingleton;

- (_Bool)isArchivable_im;
- (_Bool)__isSingletonProxy__im;
- (void)__im_performAsynchronousTest:(CDUnknownBlockType)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(CDUnknownBlockType)arg4;

@end
