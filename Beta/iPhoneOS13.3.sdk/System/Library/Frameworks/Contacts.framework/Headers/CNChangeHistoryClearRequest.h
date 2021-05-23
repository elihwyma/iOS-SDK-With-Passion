/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor, NSArray, NSString;

@interface CNChangeHistoryClearRequest : NSObject <Swift>

{
    NSString *_clientIdentifier;
    CNChangeHistoryAnchor *_toChangeAnchor;
    NSArray *_contactChangeIDs;
    NSArray *_groupChangeIDs;
    NSString *_containerIdentifier;
}

@property (retain, nonatomic) NSArray *contactChangeIDs;
@property (retain, nonatomic) NSArray *groupChangeIDs;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (retain, nonatomic) CNChangeHistoryAnchor *toChangeAnchor;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end
