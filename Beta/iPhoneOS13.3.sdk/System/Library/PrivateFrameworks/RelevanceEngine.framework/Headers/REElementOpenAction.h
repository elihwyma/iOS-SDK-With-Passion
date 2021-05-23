/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementAction.h>

@class NSString, NSURL;

@interface REElementOpenAction : REElementAction

{
    NSURL *_url;
    NSString *_applicationID;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *applicationID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_performWithContext:(id)arg1;
- (id)initWithURL:(id)arg1 applicationID:(id)arg2;

@end
