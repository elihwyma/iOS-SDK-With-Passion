/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillFrameHandle : NSObject

{
    NSURL *_URL;
    struct __SecTrust *_serverTrust;
    _WKFrameHandle *_frameHandle;
}

@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *webui_URL;
@property (nonatomic, readonly) struct __SecTrust *webui_serverTrust;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameHandle:(id)arg1 URL:(id)arg2 serverTrust:(struct __SecTrust *)arg3;
- (id)initWithWebProcessPlugInFrame:(id)arg1;

@end
