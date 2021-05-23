/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <SearchFoundation/SFMoreResults.h>

@class NSURL, NSXPCListenerEndpoint, PARSessionConfiguration;

@interface PARAsyncMoreResults : SFMoreResults

{
    NSXPCListenerEndpoint *_endpoint;
    PARSessionConfiguration *_configuration;
    double _scale;
    NSURL *_moreResultsURL;
    unsigned long long _queryId;
    unsigned long long _clientQueryId;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) PARSessionConfiguration *configuration;
@property (nonatomic) double scale;
@property (copy, nonatomic, readonly) NSURL *moreResultsURL;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic, readonly) unsigned long long clientQueryId;

+ (_Bool)supportsSecureCoding;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
