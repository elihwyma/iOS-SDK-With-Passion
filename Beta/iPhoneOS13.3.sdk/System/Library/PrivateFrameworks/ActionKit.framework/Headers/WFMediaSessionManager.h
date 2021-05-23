/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class AMSBag, AMSMediaTask, NSString;

@interface WFMediaSessionManager : NSObject

{
    AMSMediaTask *_task;
    AMSBag *_bag;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
}

@property (nonatomic, readonly) AMSMediaTask *task;
@property (nonatomic, readonly) AMSBag *bag;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSString *clientVersion;

- (id)init;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2;
- (void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
