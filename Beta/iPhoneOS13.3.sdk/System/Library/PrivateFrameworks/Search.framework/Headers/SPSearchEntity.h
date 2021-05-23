/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPSearchEntity : NSObject

{
    _Bool _hasWords;
    NSString *_bundleIdentifier;
}

@property (retain) NSString *bundleIdentifier;
@property (readonly) NSString *tokenText;
@property (readonly) NSString *queryString;
@property (readonly) _Bool isPeopleSearch;
@property (readonly) _Bool isScopedAppSearch;
@property _Bool hasWords;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;

@end
