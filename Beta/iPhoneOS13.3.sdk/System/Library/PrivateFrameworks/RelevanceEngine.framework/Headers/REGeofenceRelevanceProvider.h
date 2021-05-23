/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider : RERelevanceProvider

{
    CLCircularRegion *_region;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) CLCircularRegion *region;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)relevanceSimulatorID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithRegion:(id)arg1;
- (id)dictionaryEncoding;
- (id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2;

@end
