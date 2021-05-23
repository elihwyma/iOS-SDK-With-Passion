/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventFetchRequestToken : NSObject

{
    unsigned int _token;
    EKEventStore *_eventStore;
}

@property (weak, nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned int token;

- (void)cancel;
- (id)initWithEventStore:(id)arg1 token:(int)arg2;

@end
