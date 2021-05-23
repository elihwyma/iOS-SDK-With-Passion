/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) double matchesCount;
@property (copy, nonatomic) NSString *requestId;

- (id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3;

@end
