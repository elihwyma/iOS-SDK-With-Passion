/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class TransparencyLogSession;

@interface TransparencyLogClient : NSObject

{
    TransparencyLogSession *_session;
}

@property (retain) TransparencyLogSession *session;

- (_Bool)needsRetry:(id)arg1;
- (_Bool)fetch:(id)arg1 shouldRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)download:(id)arg1 shouldRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)download:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBackgroundSession:(id)arg1;
- (_Bool)fetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)downloadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
