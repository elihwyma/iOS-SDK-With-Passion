/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionList : NSObject

{
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)urlSessionForRequest:(id)arg1;
- (void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(_Bool)arg2;
- (void)addSession:(id)arg1;
- (id)urlSessionForIdentifier:(id)arg1;

@end
