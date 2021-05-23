/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject

{
    NSString *_bundleIdentifier;
    id <XBSnapshotManifestStore> _store;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *defaultGroupIdentifier;
@property (copy, nonatomic, readonly) id <XBSnapshotManifestStore> store;

+ (id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 store:(id)arg2;

@end
