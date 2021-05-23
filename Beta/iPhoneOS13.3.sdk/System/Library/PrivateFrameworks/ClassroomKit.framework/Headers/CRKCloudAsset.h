/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSData, NSString;

@interface CRKCloudAsset : NSObject <Swift>

{
    NSString *_identifier;
    NSData *_assetData;
}

@property (retain, nonatomic) NSData *assetData;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)skeletonInstance;
+ (id)instanceWithRecord:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordName;
- (id)requiredKeys;
- (void)applyFieldsToRecord:(id)arg1;
- (_Bool)isChangedFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assetData:(id)arg2;
- (id)initWithIdentifier:(id)arg1 assetUrl:(id)arg2;

@end
