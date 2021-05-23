/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NNMKComposedMessage : NSObject

{
    _Bool _includeAttachments;
    NSString *_composedMessageId;
    unsigned long long _sendingType;
    NSArray *_to;
    NSArray *_cc;
    NSString *_subject;
    NSString *_body;
    NSString *_referenceMessageId;
    NSString *_standaloneReferenceMessageId;
}

@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) unsigned long long sendingType;
@property (retain, nonatomic) NSArray *to;
@property (retain, nonatomic) NSArray *cc;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (retain, nonatomic) NSString *standaloneReferenceMessageId;
@property (nonatomic) _Bool includeAttachments;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewId;

@end
