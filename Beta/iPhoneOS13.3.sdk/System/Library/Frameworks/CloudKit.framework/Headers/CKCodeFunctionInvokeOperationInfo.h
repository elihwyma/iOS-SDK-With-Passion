/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSData, NSString, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo

{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    NSString *_serviceName;
    NSString *_functionName;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_explicitBaseURL;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (copy, nonatomic) NSURL *explicitBaseURL;
@property (nonatomic) _Bool local;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
