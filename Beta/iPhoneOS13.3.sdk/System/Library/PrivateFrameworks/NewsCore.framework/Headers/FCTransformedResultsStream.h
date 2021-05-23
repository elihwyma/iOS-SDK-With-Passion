/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCStreaming;

@interface FCTransformedResultsStream : NSObject

{
    id <FCStreaming> _stream;
    CDUnknownBlockType _asyncTransformBlock;
}

@property (retain, nonatomic) id <FCStreaming> stream;
@property (copy, nonatomic) CDUnknownBlockType asyncTransformBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

- (id)initWithStream:(id)arg1 asyncTransformBlock:(CDUnknownBlockType)arg2;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
