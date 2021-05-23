/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TVPPlaybackReportingEventCollection : NSObject

{
    _Bool _isDownloaded;
    _Bool _complete;
    _Bool _initialFPSRequestsComplete;
    long long _videoType;
    NSMutableArray *_eventArray;
    NSMutableDictionary *_openEvents;
}

@property (retain, nonatomic) NSMutableArray *eventArray;
@property (retain, nonatomic) NSMutableDictionary *openEvents;
@property (nonatomic) long long videoType;
@property (nonatomic) _Bool isDownloaded;
@property (nonatomic) _Bool complete;
@property (nonatomic) _Bool initialFPSRequestsComplete;
@property (nonatomic, readonly) NSDictionary *rtcReportingEventDict;

- (id)init;
- (void)_addEventWithName:(id)arg1 type:(long long)arg2 identifier:(id)arg3 value:(id)arg4 timestamp:(id)arg5 forceAdd:(_Bool)arg6;
- (void)_closeOpenEvents;
- (void)_setError:(id)arg1 inEventDict:(id)arg2 errorCodeKey:(id)arg3 errorDomainKey:(id)arg4;
- (_Bool)containsEventWithName:(id)arg1;
- (void)addStartEventWithName:(id)arg1;
- (void)addOrReplaceStartEventWithName:(id)arg1 date:(id)arg2;
- (void)addStartEventWithName:(id)arg1 identifier:(id)arg2;
- (void)addEndEventWithName:(id)arg1;
- (void)addEndEventWithName:(id)arg1 identifier:(id)arg2;
- (void)addEndEventWithName:(id)arg1 identifier:(id)arg2 timestamp:(id)arg3;
- (void)addSingleShotEventWithName:(id)arg1 value:(id)arg2;

@end
