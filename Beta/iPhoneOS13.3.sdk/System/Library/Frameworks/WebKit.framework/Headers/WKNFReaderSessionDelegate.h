/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNFReaderSessionDelegate : NSObject

{
    struct WeakPtr<WebKit::NfcConnection> _connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithConnection:(struct NfcConnection *)arg1;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;

@end
