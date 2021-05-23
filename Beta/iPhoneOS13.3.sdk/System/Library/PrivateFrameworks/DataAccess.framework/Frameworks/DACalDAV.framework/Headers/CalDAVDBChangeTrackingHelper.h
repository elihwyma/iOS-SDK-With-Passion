/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CalDAVDBChangeTrackingHelper : NSObject

{
    NSString *_clientIdentifier;
    int _initialSequenceNumber;
    NSMutableDictionary *_savedChanges;
}

- (id)initWithClientIdentifier:(id)arg1;
- (_Bool)clearUnconsumedAndUnsavedChanges;
- (void)saveChange:(int)arg1 forEntityType:(int)arg2;

@end
