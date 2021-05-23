/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <DiagnosticExtensions/DEAttachmentItem.h>

@class NSArray, NSURL;

@interface DEAttachmentGroup : DEAttachmentItem

{
    NSURL *_rootURL;
    NSArray *_attachmentItems;
}

@property (retain, nonatomic) NSURL *rootURL;
@property (retain, nonatomic) NSArray *attachmentItems;

+ (_Bool)supportsSecureCoding;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attachToDestinationDir:(id)arg1;

@end
