/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject

{
    _Bool _shouldUpdateRepresentative;
    NSArray *_objects;
    unsigned long long _clusterId;
    unsigned long long _totalObjectCount;
    NSArray *_suggestedIdsForRepresentative;
    NSDictionary *_representativenessById;
}

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) unsigned long long clusterId;
@property (nonatomic) unsigned long long totalObjectCount;
@property (nonatomic) _Bool shouldUpdateRepresentative;
@property (retain, nonatomic) NSArray *suggestedIdsForRepresentative;
@property (retain, nonatomic) NSDictionary *representativenessById;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
