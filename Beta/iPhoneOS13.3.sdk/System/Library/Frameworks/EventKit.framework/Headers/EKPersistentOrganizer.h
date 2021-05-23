/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSURL;

@interface EKPersistentOrganizer

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSURL *address;
@property (nonatomic, getter=isCurrentUser) _Bool currentUser;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;
- (int)entityType;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(_Bool)arg4;

@end
