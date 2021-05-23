/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface PHAdjustmentData : NSObject

{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
    long long _baseVersion;
}

@property (readonly, getter=isOpaque) _Bool opaque;
@property (copy, nonatomic) NSString *formatIdentifier;
@property (copy, nonatomic) NSString *formatVersion;
@property (nonatomic) long long baseVersion;
@property (readonly) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)opaqueAdjustmentData;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_hasAdjustments;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;
- (long long)_requiredBaseVersionWithCanHandleAdjustmentData:(_Bool)arg1 assetIsVideo:(_Bool)arg2;
- (_Bool)_canBeHandledByClientUsingVerificationBlock:(CDUnknownBlockType)arg1;
- (_Bool)_contentEditingHasAdjustments;

@end
