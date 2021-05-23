/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSURL.h>

@interface NSURL (AttachmentURLUtilities)

- (id)mf_lastPartNumber;
- (long long)mf_rowID;
- (_Bool)mf_isValidAttachmentURL;
- (id)mf_partNumbers;
- (_Bool)mf_isResourceURL;
- (id)mf_firstPartNumber;

@end
