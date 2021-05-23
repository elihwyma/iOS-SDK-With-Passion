/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource

{
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedAccessQueue;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)currentValue;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCurrentValueFromIdentityProperties;

@end
