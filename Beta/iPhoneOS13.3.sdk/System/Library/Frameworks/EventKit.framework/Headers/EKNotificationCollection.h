/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (nonatomic, readonly) EKSource *source;
@property (copy, nonatomic) NSSet *notifications;

+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;
+ (_Bool)isWeakRelationship;

- (id)initWithOptions:(id)arg1;
- (unsigned int)_flags;
- (_Bool)validate:(id *)arg1;
- (void)_setSource:(id)arg1;
- (void)addNotification:(id)arg1;
- (_Bool)commit:(id *)arg1;
- (void)_setExternalID:(id)arg1;
- (void)_setExternalIDTag:(id)arg1;
- (void)_setNotificationsCollectionFlag;
- (_Bool)_hasNotificationsCollectionFlag;
- (void)_setFlags:(unsigned int)arg1;
- (void)removeNotification:(id)arg1;

@end
