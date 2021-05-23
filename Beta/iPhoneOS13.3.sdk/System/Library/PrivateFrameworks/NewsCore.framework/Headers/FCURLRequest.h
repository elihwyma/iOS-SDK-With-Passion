/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest, NSURLSession;

@interface FCURLRequest : NSObject

{
    NSURLRequest *_URLRequest;
    NSURLSession *_URLSession;
    long long _destination;
    long long _priority;
    NSString *_loggingKey;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) NSURLRequest *URLRequest;
@property (nonatomic, readonly) NSURLSession *URLSession;
@property (nonatomic, readonly) long long destination;
@property (nonatomic) long long priority;
@property (copy, nonatomic, readonly) NSString *loggingKey;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;

- (id)initWithURLRequest:(id)arg1 session:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
