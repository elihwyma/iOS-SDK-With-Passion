/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHTextFeature : NSObject

{
    float _weight;
    long long _type;
    NSString *_string;
    unsigned long long _origin;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *string;
@property (nonatomic) float weight;
@property (nonatomic) unsigned long long origin;

+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(long long)arg1;
+ (id)stringForOrigin:(unsigned long long)arg1;
+ (id)textFeatureWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4;
+ (id)textFeatureWithData:(id)arg1;
+ (id)fetchTextFeaturesByAssetLocalIdentifierForAssets:(id)arg1;
+ (id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodedData;
- (id)initWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4;

@end
