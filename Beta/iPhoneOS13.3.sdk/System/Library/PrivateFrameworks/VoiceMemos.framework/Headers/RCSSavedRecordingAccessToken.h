/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

#import <VoiceMemos/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <Swift>

{
    _Bool _exclusive;
    long long _accessIntent;
    NSURL *_compositionAVURL;
    NSString *_accessName;
    NSDictionary *_userInfo;
    NSUUID *_identifier;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long accessIntent;
@property (nonatomic, readonly, getter=isExclusive) _Bool exclusive;
@property (nonatomic, readonly) NSURL *compositionAVURL;
@property (copy, nonatomic, readonly) NSString *accessName;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;

@end
