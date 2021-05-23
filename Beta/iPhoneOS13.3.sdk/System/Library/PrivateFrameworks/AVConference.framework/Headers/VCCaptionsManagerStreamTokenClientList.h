/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol VCCaptionsSource;

__attribute__((visibility("hidden")))
@interface VCCaptionsManagerStreamTokenClientList : NSObject

{
    long long _streamToken;
    id <VCCaptionsSource> _captionsSource;
    NSMutableArray *_clientContextList;
}

@property (nonatomic, readonly) id <VCCaptionsSource> captionsSource;
@property (nonatomic, readonly) NSArray *clientContextList;

+ (_Bool)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;

- (void)dealloc;
- (void)removeContext:(id)arg1;
- (id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2;
- (id)newContext;

@end
