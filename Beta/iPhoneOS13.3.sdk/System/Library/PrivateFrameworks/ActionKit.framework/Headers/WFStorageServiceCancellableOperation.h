/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject

{
    CDUnknownBlockType _cancelBlock;
}

@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1;

@end
