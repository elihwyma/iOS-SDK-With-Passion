/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDEventStreamProperties;

@interface _CDEventStream : NSObject

{
    _CDEventStreamProperties *eventStreamProperties;
}

@property (readonly) _CDEventStreamProperties *eventStreamProperties;

+ (id)eventStreamWithProperties:(id)arg1;

- (id)description;
- (id)initWithProperties:(id)arg1;

@end
