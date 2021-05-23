/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDJournalEntry : NSObject <Swift>

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
