/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, _WKUserContentWorld;

@interface WKUserScript : NSObject

{
    struct ObjectStorage<API::UserScript> _userScript;
}

@property (nonatomic, readonly) _WKUserContentWorld *_userContentWorld;
@property (copy, nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) long long injectionTime;
@property (nonatomic, readonly, getter=isForMainFrameOnly) _Bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7;

@end
