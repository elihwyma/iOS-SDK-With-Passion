/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLRevGeoCompoundNameInfo : NSObject

{
    _Bool _isContinuation;
    _Bool _suffixWhenPrefixOnly;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSArray *_sortedNames;
}

@property (copy, nonatomic, readonly) NSString *namePrefix;
@property (copy, nonatomic, readonly) NSString *nameSuffix;
@property (copy, nonatomic, readonly) NSArray *sortedNames;
@property (nonatomic, readonly) _Bool isContinuation;
@property (nonatomic, readonly) _Bool suffixWhenPrefixOnly;

+ (_Bool)supportsSecureCoding;
+ (id)_localizedNameForName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamePrefix:(id)arg1 nameSuffix:(id)arg2 sortedNames:(id)arg3 isContinuation:(_Bool)arg4 suffixWhenPrefixOnly:(_Bool)arg5;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;

@end
