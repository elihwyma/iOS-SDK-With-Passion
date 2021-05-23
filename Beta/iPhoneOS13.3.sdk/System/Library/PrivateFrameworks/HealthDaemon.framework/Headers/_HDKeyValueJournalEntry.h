/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDJournalEntry.h>

@class NSDate, NSString;

@protocol NSSecureCoding;

@interface _HDKeyValueJournalEntry : HDJournalEntry

{
    id <NSSecureCoding> _value;
    NSString *_key;
    NSString *_domain;
    long long _category;
    long long _provenance;
    NSDate *_modificationDate;
    long long _updatePolicy;
}

@property (nonatomic, readonly) id <NSSecureCoding> value;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) long long updatePolicy;

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 modificationDate:(id)arg7;

@end
