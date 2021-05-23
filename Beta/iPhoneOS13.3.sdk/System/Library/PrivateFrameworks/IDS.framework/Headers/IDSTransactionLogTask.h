/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@interface IDSTransactionLogTask : NSObject

{
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (void)_completeWithError:(id)arg1;

@end
