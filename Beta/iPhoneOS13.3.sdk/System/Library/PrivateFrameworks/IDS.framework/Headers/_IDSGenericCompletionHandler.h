/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDSDelegateInfo.h>

@interface _IDSGenericCompletionHandler : IDSDelegateInfo

{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
