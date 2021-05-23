/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/VMVoicemail.h>

@class NSDate, NSString, NSURL;

@interface VMMutableVoicemail : VMVoicemail

@property (copy, nonatomic) NSString *callbackDestinationID;
@property (copy, nonatomic) NSString *callbackISOCountryCode;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDeleted) _Bool deleted;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, getter=isRead) _Bool read;
@property (nonatomic) unsigned long long remoteUID;
@property (copy, nonatomic) NSString *receiverDestinationID;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (copy, nonatomic) NSString *senderDestinationID;
@property (copy, nonatomic) NSString *senderISOCountryCode;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic, getter=isTrashed) _Bool trashed;

@end
