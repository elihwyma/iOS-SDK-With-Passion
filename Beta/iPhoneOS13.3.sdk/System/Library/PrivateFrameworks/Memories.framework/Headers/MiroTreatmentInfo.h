/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MiroTreatmentInfo : NSObject

{
    _Bool _treatmentApplied;
    int _requiredTreatmentStyle;
    int _assignedTreatmentStyle;
    double _altAspect;
    unsigned long long _assignedKBStyle;
    NSDictionary *_assignedTreatmentDict;
}

@property (nonatomic) double altAspect;
@property (nonatomic) int requiredTreatmentStyle;
@property (nonatomic) unsigned long long assignedKBStyle;
@property (nonatomic) _Bool treatmentApplied;
@property (nonatomic) int assignedTreatmentStyle;
@property (retain, nonatomic) NSDictionary *assignedTreatmentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
