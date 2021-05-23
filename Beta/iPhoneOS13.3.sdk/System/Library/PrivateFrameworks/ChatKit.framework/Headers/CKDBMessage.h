/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSDate, NSMutableArray, NSString;

@interface CKDBMessage : NSObject

{
    NSString *_text;
    NSString *_subject;
    NSString *_address;
    NSString *_groupID;
    NSString *_guid;
    NSString *_madridRoomname;
    NSString *_displayName;
    NSString *_madridService;
    NSString *_madridAccountGUID;
    NSString *_madridChatGUID;
    NSString *_madridChatIdentifier;
    _Bool _isMadrid;
    _Bool _hasBeenRead;
    _Bool _isOutgoing;
    _Bool _isVisibleByDefault;
    _Bool _isAudioMessage;
    long long _madridType;
    long long _identifier;
    NSDate *_date;
    NSArray *_recipients;
    NSString *_plainBody;
    NSAttributedString *_madridAttributedBody;
    NSMutableArray *_mediaObjects;
    NSString *_voicemailString;
    NSString *_madridAccountLogin;
}

@property (copy, nonatomic, readonly) NSString *madridChatGUID;
@property (nonatomic, readonly) _Bool isVisibleByDefault;
@property (nonatomic) long long identifier;
@property (copy, nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (copy, nonatomic, readonly) NSString *attachmentText;
@property (nonatomic, readonly) _Bool hasAttachments;
@property (nonatomic, readonly) NSString *plainBody;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *madridRoomname;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *madridService;
@property (nonatomic, readonly) NSString *madridAccountLogin;
@property (nonatomic, readonly) NSString *madridAccountGUID;
@property (nonatomic, readonly) NSString *madridChatIdentifier;
@property (nonatomic, readonly) _Bool isMadrid;
@property (nonatomic, readonly) _Bool hasBeenRead;
@property (nonatomic, readonly) _Bool isAudioMessage;
@property (nonatomic, readonly) _Bool isOutgoing;
@property (nonatomic, readonly) long long madridType;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSAttributedString *madridAttributedBody;

- (id)description;
- (id)previewText;
- (id)initWithRecordID:(long long)arg1;
- (id)attachmentText:(_Bool)arg1;
- (id)voicemailString;
- (id)initWithMadridMessageGUID:(id)arg1;
- (_Bool)senderIsVoicemail;
- (id)alertImage;

@end
