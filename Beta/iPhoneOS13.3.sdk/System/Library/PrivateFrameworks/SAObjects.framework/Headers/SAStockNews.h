/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockNews : SADomainObject

@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;

+ (id)news;
+ (id)newsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
