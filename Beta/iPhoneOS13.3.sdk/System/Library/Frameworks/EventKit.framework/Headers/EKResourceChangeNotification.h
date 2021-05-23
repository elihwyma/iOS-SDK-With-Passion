/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKNotification.h>

@class NSDate, NSSet;

@interface EKResourceChangeNotification : EKNotification

@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSSet *resourceChanges;

+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;

- (void)addResourceChange:(id)arg1;
- (void)removeResourceChange:(id)arg1;

@end
