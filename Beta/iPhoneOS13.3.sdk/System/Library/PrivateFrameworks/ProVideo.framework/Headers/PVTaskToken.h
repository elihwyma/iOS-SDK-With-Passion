/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVTaskTokenPool;

@interface PVTaskToken : NSObject

{
    _Bool _returned;
    PVTaskTokenPool *_pool;
    unsigned long long _tokenId;
}

@property (nonatomic) _Bool returned;
@property (weak, nonatomic, readonly) PVTaskTokenPool *pool;
@property (nonatomic, readonly) unsigned long long tokenId;

- (void)dealloc;
- (void)returnToPool;
- (id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2;

@end
