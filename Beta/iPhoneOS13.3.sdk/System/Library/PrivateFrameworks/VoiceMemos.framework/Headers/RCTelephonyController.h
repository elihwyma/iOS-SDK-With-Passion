/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RCTelephonyController : NSObject

@property (nonatomic, readonly) _Bool isCallPresent;

+ (id)sharedTelephonyController;

@end
