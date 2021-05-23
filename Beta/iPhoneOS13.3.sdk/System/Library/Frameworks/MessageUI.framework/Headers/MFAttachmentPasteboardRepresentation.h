/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject

{
    NSData *_data;
    NSString *_name;
    NSString *_mimeType;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *mimeType;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (id)initWithMFAttachment:(id)arg1;

@end
