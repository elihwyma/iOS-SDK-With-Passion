/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _CNCombinedBufferingStrategy : NSObject

{
    NSArray *_strategies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithStrategies:(id)arg1;
- (void)eachStrategy:(CDUnknownBlockType)arg1;

@end
