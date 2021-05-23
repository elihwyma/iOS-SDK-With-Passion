/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class CLLocation, NSString;

@interface RELocationRelevanceProvider : RERelevanceProvider

{
    unsigned long long _type;
    CLLocation *_location;
    double _radius;
    double _accuracy;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithLocationType:(unsigned long long)arg1;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)providerWithBundleIdentifier:(id)arg1;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;

@end
