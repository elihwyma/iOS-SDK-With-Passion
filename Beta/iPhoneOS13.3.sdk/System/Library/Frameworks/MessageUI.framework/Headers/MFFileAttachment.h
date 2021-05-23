/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MFFileAttachment : NSObject

{
    int _attachmentType;
    NSString *_attachmentName;
    NSURL *_attachmentContentIDURL;
}

@property (copy, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSURL *attachmentContentIDURL;
@property (nonatomic) int attachmentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
