/*
 Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

#import <Foundation/NSObject.h>

@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject

{
    struct __SIJobRef *_siJob;
    NSString *_dataclass;
    SPQueryResultsQueue *_resultsQueue;
    CDUnknownBlockType _resultsHandler;
}

@property (nonatomic) struct __SIJobRef *siJob;
@property (retain, nonatomic) NSString *dataclass;
@property (weak, nonatomic) SPQueryResultsQueue *resultsQueue;
@property (copy, nonatomic) CDUnknownBlockType resultsHandler;

- (void)dealloc;
- (void)cancel;
- (id)initWithSIJob:(struct __SIJobRef *)arg1 dataclass:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;

@end
