/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject

{
    struct ObjectStorage<API::UserStyleSheet> _userStyleSheet;
}

@property (copy, nonatomic, readonly) NSString *source;
@property (copy, nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly, getter=isForMainFrameOnly) _Bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(_Bool)arg2;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(_Bool)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(_Bool)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6;

@end
