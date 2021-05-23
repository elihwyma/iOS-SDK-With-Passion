/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroFreezeInfo.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MiroVideoFreezeInfo : MiroFreezeInfo

{
    NSArray *_ranges;
}

@property (retain, nonatomic) NSArray *ranges;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)token;
- (id)initWithData:(id)arg1;
- (id)dataRepresentation;
- (_Bool)isAdded;
- (_Bool)isRemoved;
- (_Bool)isFreeze;

@end
