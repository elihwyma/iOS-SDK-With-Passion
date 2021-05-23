/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCImageAttributeRules : NSObject

{
    NSMutableDictionary *_imageAttributeRules;
}

@property (retain, nonatomic) NSMutableDictionary *imageAttributeRules;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2;
- (void)swapSendAndReceiveRules;
- (void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7;
- (void)interfaceKey:(id *)arg1 forInterface:(int)arg2 directionKey:(id *)arg3 forDirection:(int)arg4;

@end
