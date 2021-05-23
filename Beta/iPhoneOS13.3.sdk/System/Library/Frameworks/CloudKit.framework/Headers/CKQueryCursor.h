/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordZoneID, NSData;

@interface CKQueryCursor : NSObject

{
    NSData *_data;
    CKRecordZoneID *_zoneID;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) CKRecordZoneID *zoneID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithData:(id)arg1 zoneID:(id)arg2;

@end
