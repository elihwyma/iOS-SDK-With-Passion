/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSString, WFFileRepresentation;

@interface WFRemoteQuarantineAsset : NSObject

{
    CKRecordID *identifier;
    long long _compatibilityVersion;
    long long _contentVersion;
    WFFileRepresentation *_assetDataFile;
    NSString *_configuration;
}

@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) long long contentVersion;
@property (retain, nonatomic) WFFileRepresentation *assetDataFile;
@property (copy, nonatomic) NSString *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;

@end
