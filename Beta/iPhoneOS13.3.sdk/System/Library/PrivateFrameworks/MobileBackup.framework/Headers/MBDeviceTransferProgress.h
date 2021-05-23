/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MBDeviceTransferProgress : NSObject

{
    NSString *_phaseDescription;
    double _progress;
    long long _minutesRemaining;
    NSDate *_fileTransferStartDate;
    NSDate *_restoreStartDate;
    unsigned long long _filesTransferred;
    unsigned long long _bytesTransferred;
}

@property (retain, nonatomic) NSString *phaseDescription;
@property (nonatomic) double progress;
@property (nonatomic) long long minutesRemaining;
@property (retain, nonatomic) NSDate *fileTransferStartDate;
@property (retain, nonatomic) NSDate *restoreStartDate;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) unsigned long long bytesTransferred;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
