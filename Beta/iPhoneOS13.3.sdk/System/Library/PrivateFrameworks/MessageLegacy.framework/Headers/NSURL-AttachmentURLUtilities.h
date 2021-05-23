/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSURL.h>

@interface NSURL (AttachmentURLUtilities)

- (id)mf_lastPartNumber;
- (unsigned int)mf_rowID;
- (_Bool)mf_isValidAttachmentURL;
- (id)mf_partNumbers;
- (_Bool)mf_isResourceURL;
- (id)mf_firstPartNumber;

@end
