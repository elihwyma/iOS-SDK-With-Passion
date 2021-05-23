/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTAggregateCacheableResource : NSObject

{
    NSArray *_cacheableResources;
}

@property (nonatomic, readonly) NSArray *cacheableResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)requiresEncryption;
- (id)volatileIdentifierForScope:(id)arg1;
- (unsigned long long)costForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)identifierForScope:(id)arg1 persistent:(_Bool)arg2;
- (id)initWithCacheableResources:(id)arg1;

@end
