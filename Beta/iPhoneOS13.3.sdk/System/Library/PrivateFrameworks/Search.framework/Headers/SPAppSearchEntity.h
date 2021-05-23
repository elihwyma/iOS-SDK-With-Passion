/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPAppSearchEntity : SPSearchEntity

{
    NSString *_appName;
}

@property (retain) NSString *appName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)queryString;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;
- (_Bool)isPeopleSearch;
- (_Bool)isScopedAppSearch;
- (id)tokenText;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;

@end
