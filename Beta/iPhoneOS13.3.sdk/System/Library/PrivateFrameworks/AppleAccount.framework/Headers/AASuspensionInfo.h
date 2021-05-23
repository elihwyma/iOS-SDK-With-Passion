/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <Swift>

{
    NSDictionary *_suspensionInfoDictionary;
}

@property (nonatomic, readonly, getter=isiCloudSuspended) _Bool iCloudSuspended;
@property (nonatomic, readonly, getter=isFamilySuspended) _Bool familySuspended;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
