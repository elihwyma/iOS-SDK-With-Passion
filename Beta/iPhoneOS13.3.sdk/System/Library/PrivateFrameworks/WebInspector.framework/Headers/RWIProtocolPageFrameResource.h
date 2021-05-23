/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) _Bool failed;
@property (nonatomic) _Bool canceled;
@property (copy, nonatomic) NSString *sourceMapURL;
@property (copy, nonatomic) NSString *targetId;

- (id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3;

@end
