/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TVPPlaybackState : NSObject

{
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;

+ (id)stopped;
+ (id)playing;
+ (id)paused;
+ (id)loading;
+ (id)scanning;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1;

@end
