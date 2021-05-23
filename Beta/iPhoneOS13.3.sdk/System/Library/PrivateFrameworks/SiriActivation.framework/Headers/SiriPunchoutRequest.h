/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject

{
    NSString *_bundleIdentifier;
    NSURL *_url;
    long long _punchoutStyle;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) long long punchoutStyle;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
