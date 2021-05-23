/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MSAttachmentInfo : NSObject

{
    NSURL *_url;
    NSString *_filename;
}

@property (nonatomic, readonly) NSURL *url;
@property (copy, nonatomic) NSString *filename;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2;

@end
