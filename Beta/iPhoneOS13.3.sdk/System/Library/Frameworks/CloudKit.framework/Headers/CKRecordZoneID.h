/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@interface CKRecordZoneID : NSObject

{
    NSString *_zoneName;
    NSString *_ownerName;
}

@property (nonatomic, readonly) NSString *zoneName;
@property (nonatomic, readonly) NSString *ownerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)CKPropertiesDescription;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ckShortDescription;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (long long)compareToRecordZoneID:(id)arg1;
- (_Bool)isDefaultRecordZoneID;
- (id)CKXPCSuitableString;

@end
