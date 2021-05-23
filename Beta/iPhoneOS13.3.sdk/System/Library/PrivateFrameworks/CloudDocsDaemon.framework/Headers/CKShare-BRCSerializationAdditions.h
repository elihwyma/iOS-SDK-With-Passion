/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKShare.h>

@interface CKShare (BRCSerializationAdditions)

- (_Bool)deserializeSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)_brc_isOwner;

@end
