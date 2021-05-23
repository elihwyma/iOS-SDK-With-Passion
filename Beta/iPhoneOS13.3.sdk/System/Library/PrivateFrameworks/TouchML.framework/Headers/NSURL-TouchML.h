/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSURL.h>

@class NSDictionary, NSString;

@interface NSURL (TouchML)

@property (nonatomic, readonly) NSString *absoluteString;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSString *resourceSpecifier;
@property (nonatomic, readonly) NSDictionary *queryParameters;

+ (void)initializeJSContext:(id)arg1;

- (id)withQueryParameters:(id)arg1;
- (id)withQueryParameter:(id)arg1:(id)arg2;
- (id)filterQueryParameters:(id)arg1;

@end
