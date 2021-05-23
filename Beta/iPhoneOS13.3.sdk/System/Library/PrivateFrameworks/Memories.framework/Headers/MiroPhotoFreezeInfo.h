/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroFreezeInfo.h>

__attribute__((visibility("hidden")))
@interface MiroPhotoFreezeInfo : MiroFreezeInfo

{
    _Bool _added;
    _Bool _removed;
    _Bool _used;
    _Bool _iris;
    double _duration;
}

@property (nonatomic) _Bool added;
@property (nonatomic) _Bool removed;
@property (nonatomic) _Bool used;
@property (nonatomic) _Bool iris;
@property (nonatomic) double duration;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dataRepresentation;
- (_Bool)isAdded;
- (_Bool)isRemoved;
- (_Bool)isFreeze;

@end
