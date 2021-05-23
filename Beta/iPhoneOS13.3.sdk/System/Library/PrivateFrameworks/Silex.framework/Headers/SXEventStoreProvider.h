/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class EKEventStore;

@interface SXEventStoreProvider : NSObject

{
    EKEventStore *_eventStore;
}

@property (nonatomic, readonly) EKEventStore *eventStore;

@end
