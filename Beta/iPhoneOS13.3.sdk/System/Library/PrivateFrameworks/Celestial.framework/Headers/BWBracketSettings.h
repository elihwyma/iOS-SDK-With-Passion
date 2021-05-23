/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject

{
    int _bracketingMode;
    _Bool _providePreBracketedEV0;
    _Bool _lensStabilizationEnabledForClientBracket;
    NSArray *_exposureValues;
    NSArray *_manualExposureBracketedCaptureParams;
    NSDictionary *_oisBracketedCaptureParams;
}

@property (nonatomic, readonly) int bracketingMode;
@property (nonatomic, readonly) int bracketFrameCount;
@property (nonatomic) _Bool providePreBracketedEV0;
@property (nonatomic) _Bool lensStabilizationEnabledForClientBracket;
@property (copy, nonatomic) NSArray *exposureValues;
@property (copy, nonatomic) NSArray *manualExposureBracketedCaptureParams;
@property (copy, nonatomic) NSDictionary *oisBracketedCaptureParams;

+ (_Bool)supportsSecureCoding;
+ (id)bracketSettingsForBracketingMode:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBracketingMode:(int)arg1;

@end
