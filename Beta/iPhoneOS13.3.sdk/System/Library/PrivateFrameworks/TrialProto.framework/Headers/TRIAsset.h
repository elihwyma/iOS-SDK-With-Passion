/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIAsset : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) _Bool hasAssetId;
@property (nonatomic) unsigned int cloudKitIndex;
@property (nonatomic) _Bool hasCloudKitIndex;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (nonatomic) _Bool signed_p;
@property (nonatomic) _Bool hasSigned_p;

+ (id)descriptor;

@end
