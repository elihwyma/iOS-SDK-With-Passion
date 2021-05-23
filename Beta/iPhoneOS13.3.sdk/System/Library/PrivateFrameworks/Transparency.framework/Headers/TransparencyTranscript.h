/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TransparencyTranscript : NSObject

{
    NSString *_context;
    NSMutableArray *_events;
}

@property (retain) NSString *context;
@property (retain) NSMutableArray *events;

- (id)initWithContext:(id)arg1;
- (id)serialize;
- (void)addEvent:(id)arg1;
- (void)startEvent:(id)arg1;
- (void)stopEventWithSuccess:(id)arg1;
- (void)stopEventWithFailure:(id)arg1 error:(id)arg2;

@end
