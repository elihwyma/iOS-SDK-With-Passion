/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

#import <PhotosGraph/Swift-Protocol.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <Swift>

{
    NSString *_assetUUID;
    NSString *_momentUUID;
}

@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) NSString *momentUUID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;

@end
