/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface MCDomainsCacheEntry : NSObject

{
    _Bool _subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

@property (nonatomic) _Bool subdomainsMatch;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *port;

+ (id)normalizedPatternString:(id)arg1;

- (id)description;
- (_Bool)matchesURL:(id)arg1;
- (id)initWithPattern:(id)arg1;

@end
