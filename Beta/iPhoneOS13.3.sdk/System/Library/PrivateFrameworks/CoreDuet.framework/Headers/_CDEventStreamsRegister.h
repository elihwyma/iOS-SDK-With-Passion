/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _CDEventStreamsRegister : NSObject

{
    NSArray *_eventStreams;
}

@property (copy, nonatomic, readonly) NSArray *eventStreams;

- (id)getEventHandler:(id)arg1;
- (id)initWithEventStreams:(id)arg1;
- (id)getEventHandlerDictForStreams;

@end
