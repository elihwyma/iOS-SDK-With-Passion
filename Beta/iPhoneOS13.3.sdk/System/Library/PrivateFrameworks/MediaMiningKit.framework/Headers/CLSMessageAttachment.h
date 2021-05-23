/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CLSMessageAttachment : NSObject

{
    _Bool _isOutgoing;
    _Bool _isSticker;
    _Bool _hideAttachment;
    NSString *_guid;
    long long _createdDateValue;
    long long _startDateValue;
    NSString *_transferName;
    NSString *_filename;
    NSString *_utiType;
    NSString *_mimeType;
    long long _transferState;
    long long _totalBytes;
    NSDictionary *_userInfo;
    NSDictionary *_stickerUserInfo;
    NSDictionary *_attributionInfo;
    NSString *_originalGUID;
}

@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) long long createdDateValue;
@property (nonatomic, readonly) long long startDateValue;
@property (nonatomic, readonly) long long transferState;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly) _Bool isOutgoing;
@property (nonatomic, readonly) _Bool isSticker;
@property (nonatomic, readonly) _Bool hideAttachment;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *transferName;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *utiType;
@property (nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSString *originalGUID;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSDictionary *stickerUserInfo;
@property (nonatomic, readonly) NSDictionary *attributionInfo;

- (id)debugDescription;
- (id)initWithAttachmentRecord:(struct _IMDAttachmentRecordStruct *)arg1;

@end
