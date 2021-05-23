/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

#import <IconServices/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface ISIconResourceLocator : NSObject <Swift>

{
    NSURL *_resourceDirectoryURL;
    NSString *_bundleIdentifier;
    NSDictionary *_iconsDictionary;
    NSString *_preferedResourceName;
}

@property (retain) NSURL *resourceDirectoryURL;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *iconsDictionary;
@property (copy) NSString *preferedResourceName;
@property (readonly) _Bool allowLocalizedIcon;

+ (_Bool)supportsSecureCoding;
+ (id)resourceLocatorWithLSIconResourceLocator:(id)arg1;
+ (id)resourceLocatorWithType:(id)arg1;
+ (id)genericIconrResourceLocator;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
