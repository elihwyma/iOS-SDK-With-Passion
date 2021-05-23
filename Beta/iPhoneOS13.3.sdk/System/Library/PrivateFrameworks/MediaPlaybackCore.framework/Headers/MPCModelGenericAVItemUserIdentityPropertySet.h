/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICUserIdentityProperties;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject

{
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_delegatedIdentityProperties;
}

@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties;

+ (void)identityPropertySetFromRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)initWithIdentityProperties:(id)arg1 delegatedIdentityProperties:(id)arg2;

@end
