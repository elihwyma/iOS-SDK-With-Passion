/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <Foundation/NSObject.h>

@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject

{
    FTMessageDelivery *_messageDelivery;
}

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)sendFTMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
