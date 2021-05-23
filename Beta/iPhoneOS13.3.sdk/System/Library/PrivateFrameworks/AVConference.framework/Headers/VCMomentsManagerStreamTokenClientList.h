/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol VCMomentsMessenger;

__attribute__((visibility("hidden")))
@interface VCMomentsManagerStreamTokenClientList : NSObject

{
    long long _streamToken;
    id <VCMomentsMessenger> _messenger;
    NSMutableArray *_clientContextList;
}

@property (nonatomic, readonly) id <VCMomentsMessenger> messenger;
@property (nonatomic, readonly) NSArray *clientContextList;

+ (_Bool)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;

- (void)dealloc;
- (void)removeContext:(id)arg1;
- (id)newContext;
- (id)initWithStreamToken:(long long)arg1 messenger:(id)arg2;

@end
