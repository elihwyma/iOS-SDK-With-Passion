/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKTimedEventStorePurger, NSString;

@interface EKEphemeralCacheEventStoreProvider : NSObject

{
    EKTimedEventStorePurger *_eventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)eventStore;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1;

@end
