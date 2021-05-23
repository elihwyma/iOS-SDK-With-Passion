/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface NWUUIDMapper : NSObject

{
    double _lastAccessDate;
    NSUUID *_externalUUID;
    unsigned long long _usageFlags;
}

@property (nonatomic) double lastAccessDate;
@property (retain, nonatomic) NSUUID *externalUUID;
@property (nonatomic) unsigned long long usageFlags;
@property (nonatomic, readonly) _Bool reportDestinationsConfigured;

- (id)description;
- (void)ensureReportDestinationsConfigured;
- (void)inheritReportDestinations:(id)arg1;

@end
