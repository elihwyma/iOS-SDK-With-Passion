/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry

{
    id _value;
    HKCharacteristicType *_dataType;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) HKCharacteristicType *dataType;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
