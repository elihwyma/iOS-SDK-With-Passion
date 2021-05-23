/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSNumber, NSString, WFFileRepresentation;

@interface WFRemoteConfigurationAsset : NSObject

{
    CKRecordID *identifier;
    NSString *_assetType;
    NSString *_shortVersion;
    WFFileRepresentation *_assetDataFile;
    NSString *_configuration;
    NSNumber *_buildNumber;
}

@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *shortVersion;
@property (retain, nonatomic) WFFileRepresentation *assetDataFile;
@property (copy, nonatomic) NSString *configuration;
@property (copy, nonatomic) NSNumber *buildNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;

@end
