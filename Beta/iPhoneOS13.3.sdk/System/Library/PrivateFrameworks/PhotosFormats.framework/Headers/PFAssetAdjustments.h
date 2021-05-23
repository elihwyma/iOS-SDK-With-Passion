/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface PFAssetAdjustments : NSObject

{
    NSDate *_adjustmentTimestamp;
    NSDictionary *_propertyListDictionary;
}

@property (copy, nonatomic, readonly) NSString *adjustmentFormatIdentifier;
@property (copy, nonatomic, readonly) NSString *adjustmentFormatVersion;
@property (nonatomic, readonly) NSData *adjustmentData;
@property (copy, nonatomic, readonly) NSString *editorBundleID;
@property (nonatomic, readonly) long long adjustmentBaseVersion;
@property (nonatomic, readonly) unsigned int adjustmentRenderTypes;
@property (nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) NSDictionary *propertyListDictionary;

+ (_Bool)writeReassembleAdjustmentsPropertyListAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)adjustmentsPropertyListFileRequiresOverflowDataReassemblyAtURL:(id)arg1 predictedSize:(long long *)arg2;
+ (id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 error:(id *)arg2;
+ (id)dataForOverflowDataReassembledAdjustmentsPropertyListAtURL:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderTypes:(unsigned int)arg6;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4;

@end
