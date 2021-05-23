/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADEventPredicate.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate

{
    int _entityType;
    NSString *_externalIdentifier;
}

@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) int entityType;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
