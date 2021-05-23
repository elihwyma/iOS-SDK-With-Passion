/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordZoneID, NSString;

@interface CKRecordID : NSObject

{
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidRecordName:(id)arg1 outError:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)CKXPCSuitableString;
- (long long)compareToRecordID:(id)arg1;

@end
