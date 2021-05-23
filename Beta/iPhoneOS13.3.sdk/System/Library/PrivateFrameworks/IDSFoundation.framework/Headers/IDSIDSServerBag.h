/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSServerBag.h>

@interface IDSIDSServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;
- (_Bool)isInDebilitatedMode;

@end
