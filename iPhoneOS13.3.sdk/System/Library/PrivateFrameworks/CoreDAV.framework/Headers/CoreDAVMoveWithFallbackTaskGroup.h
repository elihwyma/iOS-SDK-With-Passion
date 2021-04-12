//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSString *_previousETag;
    BOOL _useFallback;
    int _overwrite;
    NSData *_dataPayload;
    NSString *_dataContentType;
    NSDictionary *_responseHeaders;
    NSString *_nextETag;
}

@property(readonly, nonatomic) NSString *nextETag; // @synthesize nextETag=_nextETag;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSString *dataContentType; // @synthesize dataContentType=_dataContentType;
@property(retain, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) BOOL useFallback; // @synthesize useFallback=_useFallback;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
// - (void).cxx_destruct;
- (void)_completedPutTask:(id)arg1;
- (void)_completedMoveTask:(id)arg1;
- (void)startTaskGroup;
- (id)description;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4;

@end

