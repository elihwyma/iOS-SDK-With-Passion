/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSNumber, NSSet;

@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject

{
    NSMutableSet *_uuidHistory;
    id <CLKUIResourceProviderDelegate> _delegate;
    NSNumber *_key;
}

@property (weak, nonatomic, readonly) id <CLKUIResourceProviderDelegate> delegate;
@property (nonatomic, readonly) NSSet *uuidHistory;
@property (nonatomic, readonly) NSNumber *key;

- (id)initWithDelegate:(id)arg1 key:(id)arg2;
- (void)addUuidToHistory:(id)arg1;

@end
