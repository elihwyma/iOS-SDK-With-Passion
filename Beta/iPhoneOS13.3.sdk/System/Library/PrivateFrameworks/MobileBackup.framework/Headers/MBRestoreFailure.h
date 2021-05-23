/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSString;

@interface MBRestoreFailure : NSObject

{
    NSString *_identifier;
    NSString *_displayName;
    NSString *_dataclass;
    NSString *_assetType;
    NSData *_icon;
    NSError *_error;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *dataclass;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSData *icon;
@property (copy, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 displayName:(id)arg4 error:(id)arg5;

@end
