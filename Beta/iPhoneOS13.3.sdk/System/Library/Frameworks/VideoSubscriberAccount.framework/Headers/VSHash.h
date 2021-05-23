/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VSHash : NSObject

{
    _Bool _finalized;
    NSData *_finalData;
    struct CC_SHA256state_st _ctx;
}

@property (nonatomic, getter=isFinalized) _Bool finalized;
@property (nonatomic) struct CC_SHA256state_st ctx;
@property (copy, nonatomic) NSData *finalData;

- (id)init;
- (void)dealloc;
- (void)updateWithData:(id)arg1;
- (void)updateWithString:(id)arg1;
- (void)updateWithDate:(id)arg1;
- (void)updateWithInteger:(long long)arg1;
- (void)updateWithUUID:(id)arg1;

@end
