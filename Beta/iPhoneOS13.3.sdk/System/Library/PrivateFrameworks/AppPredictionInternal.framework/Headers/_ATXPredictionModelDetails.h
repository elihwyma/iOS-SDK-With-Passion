/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ATXPredictionModelDetails : NSObject

{
    long long _assetCompatibilityVersion;
    long long _assetVersion;
    NSString *_abGroup;
}

@property (nonatomic) long long assetCompatibilityVersion;
@property (nonatomic) long long assetVersion;
@property (retain, nonatomic) NSString *abGroup;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetCompatibilityVersion:(long long)arg1 assetVersion:(long long)arg2 abGroup:(id)arg3;

@end
