/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKConceptIdentifier, NSUUID;

@interface HDHealthOntologyManagerConceptSampleRelationship : NSObject

{
    NSUUID *_sampleUUID;
    HKConceptIdentifier *_conceptIdentifier;
}

@property (copy, nonatomic, readonly) NSUUID *sampleUUID;
@property (copy, nonatomic, readonly) HKConceptIdentifier *conceptIdentifier;

- (id)init;
- (id)initWithSampleUUID:(id)arg1 conceptIdentifier:(id)arg2;

@end
