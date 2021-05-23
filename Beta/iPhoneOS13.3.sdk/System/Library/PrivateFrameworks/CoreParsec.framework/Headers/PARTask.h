/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class PARRequest, PARSession;

@interface PARTask : NSObject

{
    CDUnknownBlockType _completionBlock;
    PARSession *_session;
    unsigned long long _queryId;
    PARRequest *_request;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (weak, nonatomic) PARSession *session;
@property unsigned long long queryId;
@property (retain, nonatomic) PARRequest *request;

- (void)resume;

@end
