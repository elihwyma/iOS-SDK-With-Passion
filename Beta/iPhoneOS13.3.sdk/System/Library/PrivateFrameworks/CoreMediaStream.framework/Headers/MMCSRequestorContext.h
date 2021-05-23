/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MMCSEngine;

@interface MMCSRequestorContext : NSObject

{
    int _type;
    MMCSEngine *_engine;
    char **_signatures;
    unsigned long long _count;
    unsigned long long *_itemIDs;
    unsigned int *_itemFlags;
    char **_authTokens;
}

@property (weak, nonatomic) MMCSEngine *engine;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long *itemIDs;
@property (nonatomic) unsigned int *itemFlags;
@property (nonatomic) char **signatures;
@property (nonatomic) char **authTokens;

+ (id)contextWithEngine:(id)arg1 type:(int)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEngine:(id)arg1 type:(int)arg2;

@end
