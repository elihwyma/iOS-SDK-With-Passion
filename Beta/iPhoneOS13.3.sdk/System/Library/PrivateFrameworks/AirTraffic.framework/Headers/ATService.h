/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

#import <AirTraffic/Swift-Protocol.h>

@class NSHashTable, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface ATService : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_messageLinks;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSMutableSet *messageLinks;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (_Bool)run;
- (_Bool)stop;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)messageLinkForIdentifier:(id)arg1;
- (void)addMessageLink:(id)arg1;
- (void)removeMessageLink:(id)arg1;

@end
