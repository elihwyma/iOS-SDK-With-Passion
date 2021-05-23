/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface SGURL : NSObject

{
    unsigned char _flags;
    NSURL *_url;
    NSString *_title;
    NSString *_receivedFromHandle;
    NSString *_bundleIdentifier;
    NSString *_groupIdentifier;
    NSString *_documentIdentifier;
    NSString *_documentTitle;
    NSDate *_documentDate;
    double _documentTimeInterval;
    NSDate *_receivedAt;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *receivedFromHandle;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *documentIdentifier;
@property (nonatomic, readonly) NSString *documentTitle;
@property (nonatomic, readonly) NSDate *documentDate;
@property (nonatomic, readonly) double documentTimeInterval;
@property (nonatomic, readonly) NSDate *receivedAt;
@property (nonatomic, readonly) unsigned char flags;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToURL:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 receivedFromHandle:(id)arg3 bundleIdentifier:(id)arg4 groupIdentifier:(id)arg5 documentIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 flags:(unsigned char)arg11;

@end
