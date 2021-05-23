/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface PLNSUUIDJournalEntryPayloadID : NSObject

{
    NSUUID *_payloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)payloadUUIDData;
- (id)payloadIDString;

@end
