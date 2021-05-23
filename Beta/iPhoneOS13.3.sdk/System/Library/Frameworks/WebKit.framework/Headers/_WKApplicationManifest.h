/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface _WKApplicationManifest : NSObject

{
    struct ObjectStorage<API::ApplicationManifest> _applicationManifest;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSString *applicationDescription;
@property (copy, nonatomic, readonly) NSURL *scope;
@property (copy, nonatomic, readonly) NSURL *startURL;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (_Bool)supportsSecureCoding;
+ (id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
