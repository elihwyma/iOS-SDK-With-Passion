/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VEKResult : NSObject

{
    NSDictionary *_results;
}

@property (retain) NSDictionary *results;

- (id)description;
- (id)initWithResults:(id)arg1;
- (void)appendResult:(id)arg1;

@end
