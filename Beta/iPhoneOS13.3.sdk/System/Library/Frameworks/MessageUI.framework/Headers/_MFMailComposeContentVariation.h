/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface _MFMailComposeContentVariation : NSObject

{
    NSMutableArray *_attachmentIdentifiers;
    _Bool _bodyIsHTML;
    NSString *_name;
    NSString *_body;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) _Bool bodyIsHTML;
@property (copy, nonatomic) NSArray *attachmentIdentifiers;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)addAttachmentIdentifier:(id)arg1;

@end
