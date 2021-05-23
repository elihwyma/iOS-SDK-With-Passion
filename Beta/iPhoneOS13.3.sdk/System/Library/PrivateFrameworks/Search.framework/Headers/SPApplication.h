/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface SPApplication : NSObject

{
    NSString *_longDisplayName;
    _Bool _isWebClip;
    NSString *_displayIdentifier;
    NSMutableArray *_keywords;
    NSURL *_URL;
    NSString *_shortVersion;
    NSString *_displayNameInternal;
}

@property (retain) NSString *displayNameInternal;
@property (retain, nonatomic) NSString *displayIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *longDisplayName;
@property (retain, nonatomic) NSMutableArray *keywords;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *shortVersion;
@property (nonatomic) _Bool isWebClip;
@property (nonatomic, readonly) _Bool displayNameLoaded;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)copySearchFoundationResult:(id)arg1;

@end
