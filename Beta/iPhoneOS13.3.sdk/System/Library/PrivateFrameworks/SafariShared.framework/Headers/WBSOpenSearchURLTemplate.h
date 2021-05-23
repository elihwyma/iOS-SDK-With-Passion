/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <Swift>

{
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
    NSString *_templateString;
}

@property (copy, nonatomic, readonly) NSString *templateString;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)templateBySubstitutingValues:(id)arg1;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (_Bool)includesParameter:(id)arg1;
- (id)URLWithSearchTerms:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;

@end
