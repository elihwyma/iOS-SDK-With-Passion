/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSIdentityWrapper : NSObject

{
    NSString *_identityString;
    struct _PCSIdentitySetData *_identitySet;
    NSString *_primaryServiceName;
}

@property (nonatomic, readonly) struct _PCSIdentitySetData *identitySet;
@property (nonatomic, readonly) NSString *primaryServiceName;
@property (nonatomic, readonly) NSString *identityString;

- (void)dealloc;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 withPrimaryServiceName:(id)arg2;

@end
