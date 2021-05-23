/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor;

@interface PXMemoriesDebugFeature : NSObject

{
    NSString *_featureLocalizedTitle;
    UIColor *_featureTintColor;
    unsigned long long _type;
    NSString *_localizedTitle;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedTypeStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long featureKind;
@property (nonatomic, readonly) long long featureGroupIndex;
@property (nonatomic, readonly) NSString *featureLocalizedTitle;
@property (nonatomic, readonly) NSArray *featurePeople;
@property (nonatomic, readonly) double featureScore;
@property (nonatomic, readonly) UIColor *featureTintColor;
@property (nonatomic, readonly) UIColor *featureSelectedTintColor;

+ (id)_tintColorForFeatureType:(unsigned long long)arg1;

- (id)initWithLocalizedTitle:(id)arg1 type:(unsigned long long)arg2;

@end
