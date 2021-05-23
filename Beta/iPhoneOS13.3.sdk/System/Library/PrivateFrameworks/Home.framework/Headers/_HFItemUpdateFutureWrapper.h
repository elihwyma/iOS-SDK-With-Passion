/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFItem, HFItemUpdateOutcome, NAFuture;

@interface _HFItemUpdateFutureWrapper : NSObject

{
    _Bool _isInternal;
    NAFuture *_future;
    HFItem *_item;
    HFItemUpdateOutcome *_outcome;
}

@property (retain, nonatomic) NAFuture *future;
@property (retain, nonatomic) HFItem *item;
@property (nonatomic) _Bool isInternal;
@property (retain, nonatomic) HFItemUpdateOutcome *outcome;

+ (id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(_Bool)arg3;
+ (id)futuresFromWrappers:(id)arg1;

@end
