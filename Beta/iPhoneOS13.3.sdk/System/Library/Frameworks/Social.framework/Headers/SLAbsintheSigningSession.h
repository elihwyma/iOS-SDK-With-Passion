/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLAbsintheSigningSession : NSObject

{
    struct NACContextOpaque_ *_context;
    NSString *_certURL;
    NSString *_sessionURL;
}

- (void)dealloc;
- (_Bool)establish;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;
- (id)_urlEncodedString:(id)arg1;

@end
