/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSExtension.h>

@class LSPlugInKitProxy, NSString, NSURL;

@interface NSExtension (CXCallDirectoryStoreMigrator)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEnabledViaPlugInKit) _Bool enabledViaPlugInKit;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedContainingAppName;
@property (nonatomic, readonly) NSURL *containingAppURL;
@property (nonatomic, readonly) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, readonly, getter=isEnabledViaPlugInKit) _Bool enabledViaPlugInKit;

@end
