/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSDictionary, NSSet, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup

{
    NSURL *_url;
    NSSet *_primaryElements;
    _Bool _shouldSupportVEVENT;
    _Bool _shouldSupportVTODO;
    NSDictionary *_headersToOverride;
    NSDictionary *_responseHeaders;
    NSSet *_fallbackElements;
}

@property (retain, nonatomic) NSSet *fallbackElements;
@property (nonatomic) _Bool shouldSupportVEVENT;
@property (nonatomic) _Bool shouldSupportVTODO;
@property (retain, nonatomic) NSDictionary *headersToOverride;
@property (retain, nonatomic) NSDictionary *responseHeaders;

- (void)startTaskGroup;
- (void)_mkcalendarAfterFailureCount:(unsigned long long)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;

@end
