/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAppContainerTuple, NSString;

__attribute__((visibility("hidden")))
@interface CKDAppContainerAccountTuple : NSObject

{
    CKDAppContainerTuple *_appContainerTuple;
    NSString *_accountID;
}

@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (copy, nonatomic) NSString *accountID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKPropertiesDescription;
- (id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2;

@end
