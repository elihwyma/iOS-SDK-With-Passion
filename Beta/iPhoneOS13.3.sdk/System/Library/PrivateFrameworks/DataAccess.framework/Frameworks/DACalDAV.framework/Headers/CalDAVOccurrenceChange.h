/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject

{
    _Bool _isMaster;
    ICSDate *_recurrenceID;
    NSMutableDictionary *_changes;
}

@property (retain, nonatomic) NSMutableDictionary *changes;
@property (nonatomic) _Bool isMaster;
@property (retain, nonatomic) ICSDate *recurrenceID;
@property (nonatomic, readonly) _Bool dateTimeChanged;
@property (nonatomic, readonly) _Bool startTimeChanged;
@property (nonatomic, readonly) _Bool endTimeChanged;
@property (nonatomic, readonly) _Bool timeZoneChanged;
@property (nonatomic, readonly) _Bool locationChanged;
@property (nonatomic, readonly) _Bool summaryChanged;
@property (nonatomic, readonly) _Bool urlChanged;
@property (nonatomic, readonly) _Bool descriptionChanged;
@property (nonatomic, readonly) _Bool statusChanged;
@property (nonatomic, readonly) _Bool attendeesChanged;
@property (nonatomic, readonly) _Bool attachmentsChanged;
@property (nonatomic, readonly) _Bool recurrenceChanged;
@property (nonatomic, readonly) _Bool participationChanged;
@property (nonatomic, readonly) _Bool privateCommentChanged;
@property (nonatomic, readonly) _Bool proposedStartDateChanged;

+ (id)changeWithOccurrenceID:(id)arg1;
+ (id)changeWithItem:(id)arg1;

- (id)init;
- (void)addChangedProperty:(id)arg1;
- (id)initWithOccurrenceID:(id)arg1;
- (void)addChangedParameter:(id)arg1 ofProperty:(id)arg2;
- (_Bool)didPropertyChange:(id)arg1;
- (_Bool)didParameterChange:(id)arg1 onProperty:(id)arg2;

@end
