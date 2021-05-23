/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double expires;
@property (nonatomic) int size;
@property (nonatomic) _Bool httpOnly;
@property (nonatomic) _Bool secure;
@property (nonatomic) _Bool session;
@property (nonatomic) long long sameSite;

- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(_Bool)arg7 secure:(_Bool)arg8 session:(_Bool)arg9 sameSite:(long long)arg10;

@end
