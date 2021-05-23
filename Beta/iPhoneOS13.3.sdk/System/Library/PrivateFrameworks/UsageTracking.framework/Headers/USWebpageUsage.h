/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;

@interface USWebpageUsage : NSObject

{
    NSMutableDictionary *_contextUsageRecord;
    NSURL *_URL;
    id <_CDAsyncLocalContext> _context;
    id <_DKKnowledgeSaving> _eventStorage;
}

@property (readonly) id <_CDAsyncLocalContext> context;
@property (readonly) id <_DKKnowledgeSaving> eventStorage;
@property (copy, readonly) NSURL *URL;

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1;
- (void)changeState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3;

@end
