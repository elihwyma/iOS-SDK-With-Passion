/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject

{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

@property (nonatomic, readonly) long long currentFeatureVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (void)addSyncAnchor:(struct NSData *)arg1 forFeatureVersion:(long long)arg2;
- (struct NSData *)syncAnchorForFeatureVersion:(long long)arg1;
- (long long)featureVersionForSyncAnchor:(struct NSData *)arg1;
- (void)enumerateHistoryWithBlock:(CDUnknownBlockType)arg1;

@end
