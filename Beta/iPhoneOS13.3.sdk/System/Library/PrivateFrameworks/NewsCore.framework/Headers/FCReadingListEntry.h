/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKRecord, NSDate, NSString;

@interface FCReadingListEntry : NSObject

{
    NSString *_identifier;
    NSString *_articleID;
    NSDate *_dateAdded;
    unsigned long long _origin;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) unsigned long long origin;
@property (nonatomic, readonly) CKRecord *asCKRecord;

- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4;

@end
