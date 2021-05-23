/*
 Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CommunicationFilterItem : NSObject

{
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
}

@property (nonatomic, readonly) struct __CFPhoneNumber *phoneNumber;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *unformattedID;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg1;
- (_Bool)isPhoneNumber;
- (id)_dictionaryRepresentationWithRedaction;
- (_Bool)_acceptItemType:(id)arg1;
- (_Bool)_acceptVersion:(id)arg1;
- (_Bool)matchesFilterItem:(id)arg1;

@end
