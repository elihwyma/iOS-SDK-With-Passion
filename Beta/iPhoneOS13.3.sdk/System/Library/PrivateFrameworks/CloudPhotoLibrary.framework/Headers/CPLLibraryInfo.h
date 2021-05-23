/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject

{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    NSData *_accountFlagsData;
    CPLMomentShare *_momentShare;
}

@property (copy, nonatomic) NSDictionary *assetCounts;
@property (retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory;
@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (retain, nonatomic) CPLMomentShare *momentShare;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;

@end
