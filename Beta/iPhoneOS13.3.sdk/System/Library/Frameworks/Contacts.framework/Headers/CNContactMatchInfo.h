/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNPromise, NSDictionary, NSNumber, NSSet;

@interface CNContactMatchInfo : NSObject <Swift>

{
    _Bool _matchedNameProperty;
    NSNumber *_relevanceScore;
    NSDictionary *_matchedProperties;
    NSSet *_matchedTerms;
    CNPromise *_excerpt;
}

@property (nonatomic) _Bool matchedNameProperty;
@property (copy, nonatomic) NSNumber *relevanceScore;
@property (copy, nonatomic) NSDictionary *matchedProperties;
@property (retain, nonatomic) NSSet *matchedTerms;
@property (retain, nonatomic) CNPromise *excerpt;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
