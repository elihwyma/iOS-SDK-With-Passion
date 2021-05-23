/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class RPFileTransferSession;

@interface MBDeviceTransferSession : NSObject

{
    RPFileTransferSession *_fileTransferSession;
}

@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
