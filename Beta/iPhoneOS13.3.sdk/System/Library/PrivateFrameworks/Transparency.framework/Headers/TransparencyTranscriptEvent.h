/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TransparencyTranscriptEvent : NSObject

{
    _Bool _success;
    NSDate *_timestamp;
    NSString *_name;
}

@property (retain) NSDate *timestamp;
@property (retain) NSString *name;
@property _Bool success;

- (id)initWithName:(id)arg1;
- (id)serialize;

@end
