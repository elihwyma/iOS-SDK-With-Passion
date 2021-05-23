/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

{
    _Bool _shouldHideUserPrompts;
    NSURL *_manifestURL;
}

@property (nonatomic, readonly) NSURL *manifestURL;
@property (nonatomic) _Bool shouldHideUserPrompts;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
