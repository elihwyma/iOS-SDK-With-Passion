/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class ENAccountIdentity, ENGroupContext, IDSCloudKitContainer;

@interface IDSGroupContextControllerContent : NSObject

{
    IDSCloudKitContainer *_cloudKitContainer;
    ENGroupContext *_groupContext;
    ENAccountIdentity *_accountIdentity;
}

@property (retain, nonatomic) IDSCloudKitContainer *cloudKitContainer;
@property (retain, nonatomic) ENGroupContext *groupContext;
@property (retain, nonatomic) ENAccountIdentity *accountIdentity;

@end
