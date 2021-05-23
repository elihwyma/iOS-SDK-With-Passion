/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchQuery.h>

@class CSSearchConnection, NSString;

@interface CSPrivateSearchQuery : CSSearchQuery

{
    NSString *_indexPath;
    NSString *_resolvedIndexPath;
    CSSearchConnection *_savedConnection;
}

@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (retain, nonatomic) CSSearchConnection *savedConnection;

- (void)start;
- (id)connection;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 attributes:(id)arg4;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 attributers:(id)arg3;
- (id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3;

@end
