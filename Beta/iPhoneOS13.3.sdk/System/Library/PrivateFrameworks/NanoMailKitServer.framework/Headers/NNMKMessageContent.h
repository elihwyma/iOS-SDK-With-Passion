/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject

{
    _Bool _mainAlternativeValid;
    _Bool _hasTextData;
    _Bool _partiallyLoaded;
    NSString *_messageId;
    NSString *_externalReferenceId;
    NSData *_textData;
    NSData *_htmlContentData;
    unsigned long long _originalContentSize;
    NSArray *_attachments;
}

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *externalReferenceId;
@property (nonatomic) _Bool mainAlternativeValid;
@property (retain, nonatomic) NSData *textData;
@property (retain, nonatomic) NSData *htmlContentData;
@property (nonatomic) _Bool hasTextData;
@property (nonatomic) unsigned long long originalContentSize;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) _Bool partiallyLoaded;
@property (nonatomic, readonly) _Bool isHTML;

+ (_Bool)supportsSecureCoding;
+ (id)classesForUnarchivingTextData;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
