/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDContainerInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

{
    _Bool _requireUserIDs;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
}

@property (copy, nonatomic) CKDContainerInfo *containerInfo;
@property (nonatomic) _Bool requireUserIDs;
@property (copy, nonatomic) NSString *containerIdentifier;

- (id)url;
- (long long)partitionType;
- (id)initWithContainerIdentifier:(id)arg1;
- (_Bool)usesiCloudAuthToken;
- (_Bool)usesCloudKitAuthToken;
- (void)requestDidParseJSONObject:(id)arg1;
- (long long)serverType;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresConfiguration;
- (_Bool)allowsAuthedAccount;
- (_Bool)requiresDeviceID;
- (_Bool)hasRequestBody;

@end
