/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject

{
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
    NSArray *_securityScopedResources;
}

@property (nonatomic, readonly) NSArray *securityScopedResources;
@property (nonatomic, readonly) _Bool isActive;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)initWithSecurityScopedResources:(id)arg1;
- (id)securityScopedResourcesMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)accessibleURLs;

@end
