/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MSVCLICommandInterpreter : NSObject

{
    NSMutableDictionary *_commandToInvocationsMap;
    NSMutableArray *_retainedBlockHandlers;
}

- (id)init;
- (void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)addHandlerToCommand:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)handlerExistsForCommand:(id)arg1;
- (_Bool)executeWithArgumentCount:(int)arg1 arguments:(const char **)arg2;

@end
