/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;
@property (nonatomic) _Bool changesAcknowledged;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) double timestamp;

+ (Class)frozenClass;

- (id)description;
- (id)copy;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3;
- (id)semanticIdentifier;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4;
- (void)setTimestampAsDate:(id)arg1;
- (id)timestampAsDate;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;
- (id)relatedEvent;

@end
