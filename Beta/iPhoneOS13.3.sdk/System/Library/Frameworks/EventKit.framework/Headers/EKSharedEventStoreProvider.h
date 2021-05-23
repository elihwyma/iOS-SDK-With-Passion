/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSString;

@interface EKSharedEventStoreProvider : NSObject

{
    EKEventStore *_sharedEventStore;
}

@property (nonatomic, readonly) EKEventStore *sharedEventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)eventStore;
- (id)initWithEventStore:(id)arg1;

@end
