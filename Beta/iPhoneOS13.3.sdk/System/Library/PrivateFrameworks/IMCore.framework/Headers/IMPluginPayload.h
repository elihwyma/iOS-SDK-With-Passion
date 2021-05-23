/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class DDScannerResult, IMBalloonPluginDataSource, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMPluginPayload : NSObject

{
    _Bool _update;
    _Bool _sticker;
    _Bool _shouldExpire;
    _Bool _isPlayed;
    _Bool _isFromMe;
    NSAttributedString *_text;
    NSData *_data;
    NSURL *_url;
    NSString *_breadcrumbText;
    NSString *_statusText;
    NSDictionary *_userInfo;
    NSString *_messageGUID;
    NSDate *_time;
    NSString *_associatedMessageGUID;
    NSString *_pluginBundleID;
    NSArray *_consumedSessionPayloads;
    NSString *_pluginSessionGUID;
    DDScannerResult *_dataDetectedResult;
    NSArray *_attachments;
    IMBalloonPluginDataSource *_datasource;
    NSString *_sender;
}

@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSArray *consumedSessionPayloads;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *associatedMessageGUID;
@property (retain, nonatomic) NSString *pluginSessionGUID;
@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) DDScannerResult *dataDetectedResult;
@property (retain, nonatomic) NSArray *attachments;
@property (weak, nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) _Bool isFromMe;
@property (nonatomic) _Bool isPlayed;
@property (nonatomic, readonly) _Bool shouldHideAttachments;
@property (copy, nonatomic) NSString *sender;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *breadcrumbText;
@property (retain, nonatomic) NSString *statusText;
@property (nonatomic, getter=isUpdate) _Bool update;
@property (nonatomic, getter=isSticker) _Bool sticker;
@property (nonatomic) _Bool shouldExpire;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessageItem:(id)arg1;
- (void)addAttachmentsFromFilePaths:(id)arg1;
- (_Bool)isEqualToPluginPayload:(id)arg1;
- (id)initWithCoder:(id)arg1 additionalAllowedClasses:(id)arg2;
- (void)addAttachmentsFromFileTransferGUIDs:(id)arg1;

@end
