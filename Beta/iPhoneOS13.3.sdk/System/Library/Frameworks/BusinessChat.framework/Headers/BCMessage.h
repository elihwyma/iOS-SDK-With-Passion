/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class BCImageStore, BCMessageData, BCMessageInfo, NSAttributedString, NSData, NSDictionary, NSString, NSURL, UIImage;

@protocol BCDictionaryImageSerializable;

@interface BCMessage : NSObject

{
    _Bool _isFromMe;
    NSString *_version;
    NSString *_requestIdentifier;
    NSString *_messageGUID;
    id <BCDictionaryImageSerializable> _rootObject;
    BCImageStore *_imageStore;
    BCMessageData *_messageData;
    BCMessageInfo *_receivedMessage;
    BCMessageInfo *_replyMessage;
    NSString *_title;
    NSAttributedString *_subtitle;
    NSString *_summaryText;
    NSString *_subcaption;
    NSString *_accessibilityLabel;
    NSString *_internalRootKey;
}

@property (nonatomic) _Bool isFromMe;
@property (retain, nonatomic) BCImageStore *imageStore;
@property (retain, nonatomic) BCMessageData *messageData;
@property (retain, nonatomic) BCMessageInfo *receivedMessage;
@property (retain, nonatomic) BCMessageInfo *replyMessage;
@property (retain, nonatomic) id <BCDictionaryImageSerializable> rootObject;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *internalRootKey;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) Class rootModelObject;
@property (nonatomic, readonly) NSString *rootKey;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) NSString *summaryText;
@property (retain, nonatomic) NSString *subcaption;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (nonatomic, readonly) UIImage *image;

+ (id)defaultBubbleTitleFor:(id)arg1;

- (id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5;
- (id)initWithData:(id)arg1 url:(id)arg2 isFromMe:(_Bool)arg3;
- (void)updateTitles;
- (id)encodedStringForDictionary:(id)arg1;
- (_Bool)isVersionSupported;
- (_Bool)isAnyUnknownRootKey;
- (id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(_Bool)arg4;

@end
