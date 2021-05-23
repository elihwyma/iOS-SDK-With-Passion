/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject

{
    _Bool _didReset;
    _Bool _hasChanges;
    NSMutableArray *_insertedContacts;
    NSMutableArray *_updatedContacts;
    NSMutableArray *_deletedContactIdentifiers;
}

@property _Bool didReset;
@property _Bool hasChanges;
@property (retain) NSMutableArray *insertedContacts;
@property (retain) NSMutableArray *updatedContacts;
@property (retain) NSMutableArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;

@end
