/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSSet;

@protocol PLJournalEntryPayloadID;

@protocol PLJournalEntryPayload <Swift>

@property (nonatomic, readonly) id <PLJournalEntryPayloadID> payloadID;
@property (nonatomic, readonly) unsigned int payloadVersion;
@property (nonatomic, readonly) NSSet *nilProperties;

+ (unsigned short)payloadClassID;
+ (unsigned short)payloadVersion;
+ (unsigned short)payloadWithData:forPayloadID:version:andNilProperties:error: /* Error: Ran out of types for this method. */;

- (unsigned short)migrateMergedPayload;
- (unsigned short)payloadDataWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)decodePayloadData:error: /* Error: Ran out of types for this method. */;
- (unsigned short)mergePayload: /* Error: Ran out of types for this method. */;
- (unsigned short)descriptionForEntry: /* Error: Ran out of types for this method. */;
- (unsigned short)prettyDescriptionForEntry:indent: /* Error: Ran out of types for this method. */;

@end
