/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MPCPlayerChangeRequest : NSObject

{
    unsigned long long _options;
    NSArray *_commands;
}

@property (retain, nonatomic) NSArray *commands;
@property (nonatomic) unsigned long long options;

+ (void)performRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)requestWithCommandRequests:(id)arg1;
+ (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCommandRequests:(id)arg1;

@end
