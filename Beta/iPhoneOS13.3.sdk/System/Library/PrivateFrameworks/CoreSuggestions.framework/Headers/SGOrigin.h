/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class CSPerson, NSArray, NSDate, NSString, NSURL, SGSimpleNamedEmailAddress;

@interface SGOrigin : NSObject

{
    unsigned long long _type;
    NSString *_sourceKey;
    NSString *_externalKey;
    NSString *_contextSnippet;
    struct _NSRange _contextSnippetRange;
    CSPerson *_fromPerson;
    NSString *_bundleId;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSDate *_date;
    NSString *_title;
    NSString *_operatingSystemVersion;
    _Bool _shouldShowOperatingSystemVersion;
    _Bool _fromForwardedMessage;
    NSString *_localizedApplicationName;
    NSString *_teamId;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) NSString *externalKey;
@property (nonatomic, readonly) NSString *contextSnippet;
@property (nonatomic, readonly) struct _NSRange contextSnippetRange;
@property (nonatomic, readonly) SGSimpleNamedEmailAddress *from;
@property (nonatomic, readonly) CSPerson *fromPerson;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *localizedApplicationName;
@property (nonatomic, readonly) NSString *teamId;
@property (nonatomic, readonly) NSArray *to;
@property (nonatomic, readonly) NSArray *cc;
@property (nonatomic, readonly) NSArray *bcc;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly, getter=isFromForwardedMessage) _Bool fromForwardedMessage;
@property (nonatomic, readonly) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(_Bool)arg5;
+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(_Bool)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(_Bool)arg5;
- (void)_resolveAppName;
- (_Bool)isEqualToOrigin:(id)arg1;

@end
