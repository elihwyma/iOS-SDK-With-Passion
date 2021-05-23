/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKPersistentAttendee

@property (nonatomic) int status;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantType;
@property (nonatomic) int pendingStatus;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) _Bool commentChanged;
@property (nonatomic) _Bool statusChanged;
@property (nonatomic) _Bool proposedStartDateChanged;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)flags;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setFlags:(unsigned int)arg1;
- (int)entityType;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithAddress:(id)arg1 name:(id)arg2;

@end
