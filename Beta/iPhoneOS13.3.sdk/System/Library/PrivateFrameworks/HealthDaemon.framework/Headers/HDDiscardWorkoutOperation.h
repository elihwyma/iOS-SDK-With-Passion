/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation

{
    NSUUID *_builderIdentifier;
}

@property (copy, nonatomic, readonly) NSUUID *builderIdentifier;

- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithBuilderIdentifier:(id)arg1;

@end
