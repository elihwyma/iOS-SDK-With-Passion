/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCInterestToken : NSObject

{
    CDUnknownBlockType _removeInterestBlock;
}

@property (copy, nonatomic) CDUnknownBlockType removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;
+ (id)interestTokenWithRemoveInterestBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;

@end
