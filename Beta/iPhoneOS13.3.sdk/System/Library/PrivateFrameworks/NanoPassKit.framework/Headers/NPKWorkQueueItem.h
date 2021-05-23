/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject

{
    NPKOSTransaction *_transaction;
    CDUnknownBlockType _workBlock;
}

@property (nonatomic, readonly) NPKOSTransaction *transaction;
@property (nonatomic, readonly) CDUnknownBlockType workBlock;

+ (id)itemWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;

- (id)initWithTransaction:(id)arg1 work:(CDUnknownBlockType)arg2;

@end
