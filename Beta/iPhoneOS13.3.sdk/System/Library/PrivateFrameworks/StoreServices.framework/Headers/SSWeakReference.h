/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSWeakReference : NSObject

{
    id _object;
    unsigned long long _objectAddress;
}

@property (nonatomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
