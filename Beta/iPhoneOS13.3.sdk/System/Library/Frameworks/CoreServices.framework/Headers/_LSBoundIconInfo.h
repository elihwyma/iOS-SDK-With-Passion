/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class LSBundleProxy, NSArray, NSDictionary, NSString, NSURL, _LSLazyPropertyList;

__attribute__((visibility("hidden")))
@interface _LSBoundIconInfo : NSObject

{
    _Bool _prerendered;
    _Bool _badge;
    _Bool _documentAllowOverride;
    NSString *_applicationIdentifier;
    NSURL *_containerURL;
    NSURL *_dataContainerURL;
    NSURL *_resourcesDirectoryURL;
    _LSLazyPropertyList *_iconsDictionary;
    NSString *_cacheKey;
    NSArray *_fileNames;
    LSBundleProxy *_typeOwner;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSURL *containerURL;
@property (retain, nonatomic) NSURL *dataContainerURL;
@property (retain, nonatomic) NSURL *resourcesDirectoryURL;
@property (copy, nonatomic) _LSLazyPropertyList *iconsDictionary;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSArray *fileNames;
@property (copy, nonatomic) LSBundleProxy *typeOwner;
@property (nonatomic, getter=isPrerendered) _Bool prerendered;
@property (nonatomic, getter=isBadge) _Bool badge;
@property (nonatomic) _Bool documentAllowOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSDictionary *bundleIconsDictionary;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasValidIconDictionary;
- (_Bool)hasValidFileNames;

@end
