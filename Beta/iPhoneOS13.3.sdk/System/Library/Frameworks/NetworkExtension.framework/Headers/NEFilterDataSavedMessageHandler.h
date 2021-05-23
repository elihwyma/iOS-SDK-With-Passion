/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEFilterDataSavedMessageHandler : NSObject

{
    CDUnknownBlockType _getVerdict;
    CDUnknownBlockType _handleVerdict;
}

@property (readonly) CDUnknownBlockType getVerdict;
@property (readonly) CDUnknownBlockType handleVerdict;

- (void)executeWithFlow:(id)arg1;
- (void)executeVerdictHandlerWithVerdict:(id)arg1;
- (id)initWithGetVerdictBlock:(CDUnknownBlockType)arg1 handleVerdictBlock:(CDUnknownBlockType)arg2;
- (void)enqueueWithFlow:(id)arg1;

@end
