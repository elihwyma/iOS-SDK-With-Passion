/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDictionary, NSString, NSURL, SASportsLeague, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject

@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSDictionary *images;
@property (copy, nonatomic) NSURL *largeImage;
@property (copy, nonatomic) NSDictionary *largeImages;
@property (retain, nonatomic) SASportsLeague *league;
@property (copy, nonatomic) NSURL *listImage;
@property (copy, nonatomic) NSDictionary *listImages;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchout;
@property (copy, nonatomic) NSArray *themeImages;

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
