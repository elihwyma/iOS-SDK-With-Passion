/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolPageFrame;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolPageFrame *frame;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSArray *childFrames;

- (id)initWithFrame:(id)arg1 resources:(id)arg2;

@end
