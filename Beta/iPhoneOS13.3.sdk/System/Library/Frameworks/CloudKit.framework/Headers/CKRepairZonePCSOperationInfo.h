/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_zoneIDs;
}

@property (retain, nonatomic) NSArray *zoneIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
