/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@interface CNCapabilities : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool areTelephonyCallsSupported;
@property (nonatomic, readonly) _Bool isiMessageSupported;
@property (nonatomic, readonly) _Bool isFaceTimeVideoSupported;
@property (nonatomic, readonly) _Bool isFaceTimeAudioSupported;
@property (nonatomic, readonly) _Bool isPaySupported;

@end
