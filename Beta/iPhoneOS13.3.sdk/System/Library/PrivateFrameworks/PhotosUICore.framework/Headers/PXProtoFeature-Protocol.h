/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, UIColor;

@protocol PXProtoFeature <Swift>

@property (nonatomic, readonly) long long featureKind;
@property (nonatomic, readonly) long long featureGroupIndex;
@property (nonatomic, readonly) NSString *featureLocalizedTitle;
@property (nonatomic, readonly) NSArray *featurePeople;
@property (nonatomic, readonly) double featureScore;
@property (nonatomic, readonly) UIColor *featureTintColor;
@property (nonatomic, readonly) UIColor *featureSelectedTintColor;

@end
