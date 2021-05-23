/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSString, WLMessageParty, WLMessageSMILContext, WLSourceDeviceRecordSummary;

@interface WLMessage : NSObject

{
    WLSourceDeviceRecordSummary *_summary;
    WLMessageSMILContext *_smilContext;
    NSMutableArray *_mimeParts;
    _Bool _isGroupMessage;
    NSData *_mimeData;
    unsigned long long _messageType;
    NSString *_dateString;
    NSDate *_date;
    unsigned long long _messageDirection;
    WLMessageParty *_sender;
    NSArray *_recipients;
    NSString *_subject;
    NSString *_messageText;
    NSString *_threadID;
    NSArray *_attachments;
}

@property (nonatomic, readonly) NSData *mimeData;
@property (nonatomic, readonly) unsigned long long messageType;
@property (nonatomic, readonly) NSString *dateString;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long messageDirection;
@property (nonatomic, readonly) WLMessageParty *sender;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) _Bool isGroupMessage;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *threadID;
@property (nonatomic, readonly) NSArray *attachments;

+ (struct _NSRange)_populateMimeHeaders:(id)arg1 recipients:(id)arg2 fromRange:(struct _NSRange)arg3 ofString:(id)arg4 addCountryCodeToParties:(_Bool)arg5 sqlController:(id)arg6;
+ (void)addRecipients:(id)arg1 toMimeHeaders:(id)arg2;
+ (id)_dateFormatterForMimeDateStrings;
+ (_Bool)_shouldIgnoreMessageThreadID;
+ (id)_fileNameForPart:(id)arg1 smilContext:(id)arg2;
+ (id)mimeHeadersFromMimeData:(id)arg1 sqlController:(id)arg2;
+ (id)dateFromMimeHeaders:(id)arg1;
+ (id)senderFromMimeHeaders:(id)arg1;
+ (id)recipientsFromMimeHeaders:(id)arg1;

- (id)summary;
- (void)setSummary:(id)arg1;
- (void)progressiveMimeParser:(id)arg1 beganMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2;
- (void)parseMIMEData:(id)arg1 sqlController:(id)arg2;

@end
