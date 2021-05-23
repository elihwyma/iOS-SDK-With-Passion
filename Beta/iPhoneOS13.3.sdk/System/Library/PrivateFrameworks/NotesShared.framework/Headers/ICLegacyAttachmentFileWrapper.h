/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSFileWrapper.h>

@class NSString, NSURL;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper

{
    NSURL *_cidURL;
}

@property (retain, nonatomic) NSURL *cidURL;
@property (nonatomic, readonly) NSString *attachmentIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCIDURL:(id)arg1;

@end
