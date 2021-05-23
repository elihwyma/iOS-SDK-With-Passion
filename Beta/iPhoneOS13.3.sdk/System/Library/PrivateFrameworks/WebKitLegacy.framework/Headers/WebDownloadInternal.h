/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDownloadInternal : NSObject

{
    id realDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (_Bool)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)downloadDidBegin:(id)arg1;
- (void)setRealDelegate:(id)arg1;

@end
