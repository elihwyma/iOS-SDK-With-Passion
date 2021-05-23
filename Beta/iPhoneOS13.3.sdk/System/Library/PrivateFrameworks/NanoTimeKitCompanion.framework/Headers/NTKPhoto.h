/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL, NTKPhotoAnalysis;

@interface NTKPhoto : NSObject

{
    NTKPhotoAnalysis *_analyses[4];
    _Bool _isIris;
    NSString *_localIdentifier;
    NSDate *_modificationDate;
    NSURL *_imageURL;
    NSURL *_irisVideoURL;
    double _irisDuration;
    double _irisStillDisplayTime;
    struct CGRect _originalCrop;
    struct CGRect _crop;
}

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) struct CGRect originalCrop;
@property (nonatomic, readonly) NSString *uuidFromLocalIdentifierAndModificationDate;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGRect crop;
@property (nonatomic) _Bool isIris;
@property (copy, nonatomic) NSURL *irisVideoURL;
@property (nonatomic) double irisDuration;
@property (nonatomic) double irisStillDisplayTime;
@property (nonatomic, readonly) _Bool isMissingAnalysis;

+ (id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodeAsDictionary;
- (_Bool)isEqualToAsset:(id)arg1;
- (_Bool)isEqualToPhoto:(id)arg1;
- (id)analysisForAlignment:(unsigned long long)arg1 deviceSizeClass:(unsigned long long)arg2;
- (void)setAnalysis:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3;
- (id)initWithLegacySidecar:(id)arg1;

@end
