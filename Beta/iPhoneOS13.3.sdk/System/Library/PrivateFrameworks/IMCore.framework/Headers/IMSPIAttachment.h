/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface IMSPIAttachment : NSObject

{
    NSString *_guid;
    NSURL *_fileUrl;
    long long _fileTransferState;
    NSString *_uti;
    _Bool _isSticker;
    _Bool _isOutgoing;
    NSDictionary *_attributionInfo;
    NSDate *_creationDate;
}

@property (retain) NSString *guid;
@property (retain) NSURL *fileUrl;
@property long long fileTransferState;
@property (retain) NSString *uti;
@property _Bool isSticker;
@property _Bool isOutgoing;
@property (retain) NSDictionary *attributionInfo;
@property (readonly) NSDate *creationDate;

- (id)description;
- (id)bundleID;
- (id)initWithGuid:(id)arg1 fileUrl:(id)arg2 transferState:(long long)arg3 uti:(id)arg4 isSticker:(_Bool)arg5 isOutgoing:(_Bool)arg6 attributionInfo:(id)arg7 creationDate:(id)arg8;

@end
