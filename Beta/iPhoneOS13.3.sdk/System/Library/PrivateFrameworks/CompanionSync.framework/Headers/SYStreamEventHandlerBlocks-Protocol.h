/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/Swift-Protocol.h>

@protocol SYStreamEventHandlerBlocks <Swift>

@property (copy, nonatomic) CDUnknownBlockType onOpenComplete;
@property (copy, nonatomic) CDUnknownBlockType onBytesAvailable;
@property (copy, nonatomic) CDUnknownBlockType onSpaceAvailable;
@property (copy, nonatomic) CDUnknownBlockType onEndOfFile;
@property (copy, nonatomic) CDUnknownBlockType onError;
@property (copy, nonatomic) CDUnknownBlockType onClose;

@end
