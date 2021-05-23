/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject

{
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
}

@property (nonatomic, readonly) NSString *contextID;
@property (copy, nonatomic) NSURL *attachmentsBaseURL;
@property (nonatomic, readonly) NSArray *attachments;

- (id)init;
- (void)dealloc;
- (id)initWithContextID:(id)arg1;

@end
