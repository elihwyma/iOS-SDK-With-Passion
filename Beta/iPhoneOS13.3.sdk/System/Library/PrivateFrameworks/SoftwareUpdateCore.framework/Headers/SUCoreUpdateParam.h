/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

#import <SoftwareUpdateCore/Swift-Protocol.h>

@class NSError, SUCorePolicy, SUCoreProgress;

@interface SUCoreUpdateParam : NSObject <Swift>

{
    long long _targetPhase;
    SUCorePolicy *_policy;
    SUCoreProgress *_downloadProgress;
    SUCoreProgress *_prepareProgress;
    long long _resultCode;
    NSError *_error;
}

@property (nonatomic) long long targetPhase;
@property (retain, nonatomic) SUCorePolicy *policy;
@property (retain, nonatomic) SUCoreProgress *downloadProgress;
@property (retain, nonatomic) SUCoreProgress *prepareProgress;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)targetPhaseName:(long long)arg1;

- (id)init;
- (id)description;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)summary;
- (id)initTargetPhase:(long long)arg1 policy:(id)arg2 downloadProgress:(id)arg3 prepareProgress:(id)arg4 resultCode:(long long)arg5 error:(id)arg6;
- (id)initTargetPhase:(long long)arg1 withPolicy:(id)arg2;
- (id)initWithDownloadProgress:(id)arg1;
- (id)initWithPrepareProgress:(id)arg1;

@end
