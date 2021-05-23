/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolPageFrame.h>

@interface RWIProtocolPageFrame (IKJSInspector)

+ (id)safe_initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;
+ (id)ik_globalFrame;
+ (id)ik_pageFrameFromDOMDocument:(id)arg1;

- (id)ik_resourceTreeWithResources:(id)arg1;

@end
