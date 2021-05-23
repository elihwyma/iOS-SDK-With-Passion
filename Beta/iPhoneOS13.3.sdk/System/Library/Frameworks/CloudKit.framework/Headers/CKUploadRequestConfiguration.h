/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordZoneID, NSString;

@interface CKUploadRequestConfiguration : NSObject

{
    NSString *_containerIdentifier;
    NSString *_sourceApplicationBundleID;
    CKRecordZoneID *_repairZoneID;
}

@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;
@property (copy, nonatomic) CKRecordZoneID *repairZoneID;

+ (_Bool)supportsSecureCoding;
+ (id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2;
+ (id)configurationFromBaseContainer:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromBaseContainer:(id)arg1;

@end
