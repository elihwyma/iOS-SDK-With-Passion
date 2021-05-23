/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNFetchRequest.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor, NSArray, NSData, NSString;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <Swift>

{
    _Bool _shouldUnifyResults;
    _Bool _mutableObjects;
    _Bool _includeGroupChanges;
    _Bool _enforceClientIdentifier;
    _Bool _includeChangeAnchors;
    _Bool _includeChangeIDs;
    _Bool _includeExternalIDs;
    _Bool _includeImagesChanged;
    _Bool _includeLabeledValueChanges;
    NSData *_startingToken;
    NSArray *_additionalContactKeyDescriptors;
    NSArray *_excludedTransactionAuthors;
    NSString *_clientIdentifier;
    NSString *_containerIdentifier;
}

@property (nonatomic, readonly) CNChangeHistoryAnchor *startingAnchor;
@property (nonatomic, readonly, getter=shouldEnforceClientIdentifer) _Bool enforceClientIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic) _Bool includeChangeAnchors;
@property (nonatomic) _Bool includeChangeIDs;
@property (nonatomic) _Bool includeExternalIDs;
@property (nonatomic) _Bool includeImagesChanged;
@property (nonatomic) _Bool includeLabeledValueChanges;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) _Bool unifyResults;
@property (copy, nonatomic) NSData *startingToken;
@property (copy, nonatomic) NSArray *additionalContactKeyDescriptors;
@property (nonatomic) _Bool shouldUnifyResults;
@property (nonatomic) _Bool mutableObjects;
@property (nonatomic) _Bool includeGroupChanges;
@property (copy, nonatomic) NSArray *excludedTransactionAuthors;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithStartingAnchor:(id)arg1;
- (void)setStartingAnchor:(id)arg1;

@end
