/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCOperationCanceling;

@interface FCKeyedOperation : NSObject

{
    _Bool _cancelled;
    id <FCOperationCanceling> _cancelHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)executeForQueue:(id)arg1 delegate:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
