/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class EFObservable;

@protocol MFActivityCondition <Swift>

@property (nonatomic, readonly, getter=isSatisfied) _Bool satisfied;
@property (nonatomic, readonly) EFObservable *conditionsObservable;

@end
