/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REFeatureMap;

@interface REMLElement : NSObject

{
    NSString *_identifier;
    REFeatureMap *_featureMap;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) REFeatureMap *featureMap;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 featureMap:(id)arg2;

@end
