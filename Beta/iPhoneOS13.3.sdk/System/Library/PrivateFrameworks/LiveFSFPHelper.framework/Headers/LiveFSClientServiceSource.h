/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class LiveFSFPExtensionHelper, NSString;

@interface LiveFSClientServiceSource : NSObject

{
    LiveFSFPExtensionHelper *ex;
    NSString *ident;
}

@property (copy, nonatomic, readonly) NSString *serviceName;

- (id)makeListenerEndpointAndReturnError:(id *)arg1;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;

@end
