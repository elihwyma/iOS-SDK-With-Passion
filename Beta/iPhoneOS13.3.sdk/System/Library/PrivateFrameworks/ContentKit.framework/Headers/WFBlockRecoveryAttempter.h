/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFBlockRecoveryAttempter : NSObject

{
    CDUnknownBlockType _handlerBlock;
}

@property (copy, nonatomic) CDUnknownBlockType handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

@end
