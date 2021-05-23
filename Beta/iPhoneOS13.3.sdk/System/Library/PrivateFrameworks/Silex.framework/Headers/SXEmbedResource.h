/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXResource.h>

@class NSDate, NSString, NSURL;

@interface SXEmbedResource : SXResource

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *HTML;
@property (nonatomic, readonly) NSDate *expirationDate;

- (id)expirationDateWithValue:(id)arg1 withType:(int)arg2;

@end
