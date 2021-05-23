/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSURL, SAEmail, SALocation, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (copy, nonatomic) NSURL *accountIdentifier;
@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (retain, nonatomic) SAEmail *email;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAPhone *phone;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSString *scope;

+ (id)personSearch;
+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
