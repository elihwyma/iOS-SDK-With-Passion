/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEventStore : NSObject

{
    NSMutableDictionary *_eventByEventDescriptor;
}

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (copy, nonatomic, readonly) NSArray *events;

- (id)init;
- (id)description;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)removeAllEvents;

@end
