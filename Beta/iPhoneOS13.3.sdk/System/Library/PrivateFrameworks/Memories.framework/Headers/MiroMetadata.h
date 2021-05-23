/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MiroMetadata : NSObject

{
    NSArray *_allRanges;
    NSArray *_loudnessRanges;
    NSString *_identifier;
}

@property (retain) NSArray *allRanges;
@property (readonly) NSArray *loudnessRanges;
@property (copy, nonatomic) NSString *identifier;

- (void)setRanges:(id)arg1;
- (void)addRanges:(id)arg1;
- (void)removeRangesOfType:(unsigned long long)arg1;
- (void)getMetadata;

@end
