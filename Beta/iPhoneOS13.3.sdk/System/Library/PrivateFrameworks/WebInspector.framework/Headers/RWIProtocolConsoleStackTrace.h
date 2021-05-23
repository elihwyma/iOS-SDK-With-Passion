/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *callFrames;
@property (nonatomic) _Bool topCallFrameIsBoundary;
@property (nonatomic) _Bool truncated;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *parentStackTrace;

- (id)initWithCallFrames:(id)arg1;

@end
