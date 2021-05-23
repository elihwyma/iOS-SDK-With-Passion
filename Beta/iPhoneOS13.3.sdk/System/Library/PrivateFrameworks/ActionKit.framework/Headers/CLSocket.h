/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface CLSocket : NSObject

{
    NSString *_APIKey;
    long long _appID;
    NSURL *_authURL;
    NSDictionary *_channels;
}

@property (copy, nonatomic) NSString *APIKey;
@property (nonatomic) long long appID;
@property (retain, nonatomic) NSURL *authURL;
@property (retain, nonatomic) NSDictionary *channels;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
