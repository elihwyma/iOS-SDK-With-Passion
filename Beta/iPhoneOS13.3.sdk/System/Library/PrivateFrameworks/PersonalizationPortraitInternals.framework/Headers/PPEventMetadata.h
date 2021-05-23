/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PPEventMetadata : NSObject

{
    unsigned long long _ocnt_precomputedHash;
    _Bool _shouldConsiderAlarms;
    NSDictionary *_titlesAndParticipants;
    double _earliestStartTime;
}

@property (nonatomic, readonly) NSDictionary *titlesAndParticipants;
@property (nonatomic, readonly) double earliestStartTime;
@property (nonatomic, readonly) _Bool shouldConsiderAlarms;

+ (id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(_Bool)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(_Bool)arg3;
- (_Bool)isEqualToEventMetadata:(id)arg1;

@end
