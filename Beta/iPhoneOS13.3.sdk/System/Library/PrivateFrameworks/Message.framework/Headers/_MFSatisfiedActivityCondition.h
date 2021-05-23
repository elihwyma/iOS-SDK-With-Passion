/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFObservable, NSString;

@interface _MFSatisfiedActivityCondition : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isSatisfied) _Bool satisfied;
@property (nonatomic, readonly) EFObservable *conditionsObservable;

@end
