/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServices)

@property (nonatomic, readonly) NSDictionary *ams_parameters;

+ (id)ams_cachesDirectory;
+ (id)ams_unescapedStringForString:(id)arg1;

- (id)ams_URLByAppendingQueryParameters:(id)arg1;
- (id)ams_schemeSwizzledURL;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_URLByDeletingTrailingSlash;
- (id)ams_valueForQueryParameter:(id)arg1;

@end
