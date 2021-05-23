/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface PFAssetAdjustmentFingerprintData : NSObject

{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    unsigned long long _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSData *_baseImage;
    NSString *_baseImageFingerprint;
    NSData *_largeAdjustmentData;
    NSString *_largeAdjustmentDataFingerprint;
    NSData *_secondaryAdjustmentData;
}

@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (copy, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSData *baseImage;
@property (copy, nonatomic) NSString *baseImageFingerprint;
@property (copy, nonatomic) NSData *largeAdjustmentData;
@property (copy, nonatomic) NSString *largeAdjustmentDataFingerprint;
@property (copy, nonatomic) NSData *secondaryAdjustmentData;

@end
