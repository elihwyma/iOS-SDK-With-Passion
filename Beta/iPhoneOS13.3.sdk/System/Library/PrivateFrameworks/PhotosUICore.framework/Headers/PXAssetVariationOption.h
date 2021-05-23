/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXAssetVariationOption : NSObject <Swift>

{
    _Bool _recommended;
    _Bool _current;
    long long _variationType;
    NSString *_localizedName;
}

@property (nonatomic, readonly) long long variationType;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, getter=isRecommended) _Bool recommended;
@property (nonatomic, readonly, getter=isCurrent) _Bool current;

+ (id)variationOptionWithType:(long long)arg1 recommended:(_Bool)arg2 current:(_Bool)arg3;
+ (id)_localizedNameForVariationType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToVariationOption:(id)arg1;

@end
