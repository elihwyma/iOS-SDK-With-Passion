/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <Swift>

{
    NSDictionary *_propertiesDictionary;
}

@property (nonatomic, readonly) NSDictionary *propertiesDictionary;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long storeItemIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)requiredDeviceCapabilities;
- (id)cancelDownloadURL;
- (id)storeTransationID;

@end
