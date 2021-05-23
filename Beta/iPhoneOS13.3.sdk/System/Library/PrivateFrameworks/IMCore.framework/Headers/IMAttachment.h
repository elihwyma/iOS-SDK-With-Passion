/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface IMAttachment : NSObject

{
    NSString *_guid;
    NSString *_path;
    _Bool _isSticker;
    _Bool _isTransferComplete;
    NSDate *_createdDate;
}

- (id)description;
- (id)path;
- (id)guid;
- (_Bool)isSticker;
- (id)createdDate;
- (_Bool)isTransferComplete;
- (id)initWithPath:(id)arg1 guid:(id)arg2;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(_Bool)arg4 isTransferComplete:(_Bool)arg5;
- (id)fileTransfer;

@end
