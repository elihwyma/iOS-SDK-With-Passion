/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString, NSURL;

@interface ASDEnterpriseAppMetadata : NSObject <Swift>

{
    _Bool _hideUserPrompts;
    NSURL *_manifestURL;
}

@property _Bool hideUserPrompts;
@property (readonly) NSURL *manifestURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long metadataType;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestURL:(id)arg1;

@end
