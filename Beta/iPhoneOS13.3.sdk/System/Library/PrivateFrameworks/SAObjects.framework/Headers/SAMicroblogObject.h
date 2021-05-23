/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SALocation, SAPersonAttribute;

@interface SAMicroblogObject : SADomainObject

@property (copy, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDictionary *hashtagAlternatives;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSURL *refereceId;
@property (retain, nonatomic) SAPersonAttribute *sender;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *socialProfileReferences;
@property (copy, nonatomic) NSNumber *useLocation;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
