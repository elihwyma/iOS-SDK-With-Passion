/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject

{
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *keysToFetch;

- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1;
- (id)contactWithIdentifier:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(_Bool)arg2;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)arg1;
- (id)resolveContact:(id)arg1;
- (id)resolveContactFromINPerson:(id)arg1;
- (id)resolveContactIdentifier:(id)arg1;

@end
