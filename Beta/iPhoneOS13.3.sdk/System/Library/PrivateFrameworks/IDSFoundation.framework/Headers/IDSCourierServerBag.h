/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSServerBag.h>

@interface IDSCourierServerBag : IDSServerBag

+ (id)sharedInstance;
+ (id)_bagCreationLock;
+ (id)_sharedInstanceForClass:(Class)arg1;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;

@end
