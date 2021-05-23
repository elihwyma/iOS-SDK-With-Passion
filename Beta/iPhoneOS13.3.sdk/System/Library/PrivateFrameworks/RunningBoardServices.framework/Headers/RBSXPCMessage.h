/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@interface RBSXPCMessage : NSObject

+ (id)messageForMethod:(SEL)arg1 varguments:(id)arg2;
+ (id)messageForXPCMessage:(id)arg1;
+ (id)messageWithEncoder:(CDUnknownBlockType)arg1;
+ (id)messageForMethod:(SEL)arg1 arguments:(id)arg2;

@end
