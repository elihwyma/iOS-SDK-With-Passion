/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface PXMockDisplayAsset : NSObject <Swift>

{
    NSDictionary *_backingDictionary;
}

@property (nonatomic, readonly) NSDictionary *backingDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) _Bool isInCloud;
@property (nonatomic, readonly) _Bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) NSDate *importDate;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (long long)_integerValueForKey:(id)arg1;
- (_Bool)_boolValueForKey:(id)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (unsigned long long)_unsignedIntegerValueForKey:(id)arg1;
- (double)_doubleValueForKey:(id)arg1;
- (id)_dateValueForKey:(id)arg1;

@end
