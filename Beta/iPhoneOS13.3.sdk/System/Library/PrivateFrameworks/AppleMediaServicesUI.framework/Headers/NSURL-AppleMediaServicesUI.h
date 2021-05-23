/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServicesUI)

@property (nonatomic, readonly) NSDictionary *ams_parameters;

+ (id)ams_unescapedStringForString:(id)arg1;

- (id)ams_URLByAppendingQueryParameters:(id)arg1;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_valueForQueryParameter:(id)arg1;

@end
