/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <PlugInKit/Swift-Protocol.h>

@class NSBundle, NSDictionary, NSString, NSURL, NSUUID;

@protocol PKPlugIn;

@protocol PKPlugIn <Swift>

@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingUrl;
@property (readonly) _Bool onSystemVolume;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long userElection;
@property (readonly) id <PKPlugIn> supersededBy;
@property (readonly) NSUUID *multipleInstanceUUID;
@property (readonly) _Bool spent;
@property (readonly) _Bool active;
@property (readonly) id plugInPrincipal;
@property (readonly) id embeddedPrincipal;
@property (readonly) NSBundle *embeddedBundle;
@property (copy) CDUnknownBlockType notificationBlock;

- (unsigned short)createInstanceWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)useBundle:error: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUsingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUsing: /* Error: Ran out of types for this method. */;
- (unsigned short)endUsing: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedInfoDictionaryForKeys:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)defaults;
- (unsigned short)setReplyQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUsingWithSubsystemOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)beginUsingWithSubsystemOptions:error: /* Error: Ran out of types for this method. */;
- (unsigned short)endUsingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)setHostPrincipal:withProtocol: /* Error: Ran out of types for this method. */;

@end
