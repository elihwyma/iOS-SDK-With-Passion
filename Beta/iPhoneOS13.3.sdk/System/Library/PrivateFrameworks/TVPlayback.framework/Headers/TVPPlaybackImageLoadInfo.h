/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TVPPlaybackImageLoadInfo : NSObject

{
    id _identifier;
    double _requestedTime;
    NSDate *_requestedDate;
    CDUnknownBlockType _timeBasedHandler;
    CDUnknownBlockType _dateBasedHandler;
    struct CGSize _maxSize;
    CDStruct_1b6d18a9 _requestedCMTime;
}

@property (retain, nonatomic) id identifier;
@property (nonatomic) double requestedTime;
@property (retain, nonatomic) NSDate *requestedDate;
@property (nonatomic) CDStruct_1b6d18a9 requestedCMTime;
@property (nonatomic) struct CGSize maxSize;
@property (copy, nonatomic) CDUnknownBlockType timeBasedHandler;
@property (copy, nonatomic) CDUnknownBlockType dateBasedHandler;

- (id)description;
- (void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(CDStruct_1b6d18a9)arg2 actualDate:(id)arg3;

@end
