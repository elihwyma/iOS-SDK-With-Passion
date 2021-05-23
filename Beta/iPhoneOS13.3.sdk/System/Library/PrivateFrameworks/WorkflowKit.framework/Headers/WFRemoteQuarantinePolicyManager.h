/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject

{
    CKContainer *_container;
    CKDatabase *_database;
    NSBundle *_localPolicyBundle;
}

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (nonatomic, readonly) NSBundle *localPolicyBundle;

+ (id)sharedManager;

- (id)init;
- (id)localizedString:(id)arg1;
- (id)policyString;
- (id)policyAssetBundle;
- (id)latestRemotePolicyAssetBundle;
- (id)policyStringForBundleIfValid:(id)arg1;
- (void)updatePolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (_Bool)persistAssetToDisk:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)createDirectoryForAssetWithIdentifier:(id)arg1 directoryExists:(_Bool *)arg2 error:(id *)arg3;

@end
