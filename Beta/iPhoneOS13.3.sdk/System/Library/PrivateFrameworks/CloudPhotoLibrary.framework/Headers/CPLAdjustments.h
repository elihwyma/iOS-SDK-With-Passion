/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResource, NSData, NSString;

@interface CPLAdjustments : NSObject

{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    unsigned long long _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSString *_similarToOriginalAdjustmentsFingerprint;
    NSString *_otherAdjustmentsFingerprint;
    unsigned long long _adjustmentRenderTypes;
    CPLResource *_adjustmentData;
    NSString *_creatorCode;
}

@property (copy, nonatomic) NSString *creatorCode;
@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (retain, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (nonatomic) unsigned long long adjustmentRenderTypes;
@property (retain, nonatomic) CPLResource *adjustmentData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)adjustmentSimpleDescription;

@end
