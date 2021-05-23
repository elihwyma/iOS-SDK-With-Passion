/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLJournalEntryPayloadIDFactory : NSObject

+ (id)payloadIDWithUUIDBytes:(unsigned char [16])arg1;
+ (id)payloadIDWithUUIDString:(id)arg1;
+ (id)payloadIDWithString:(id)arg1;

@end
