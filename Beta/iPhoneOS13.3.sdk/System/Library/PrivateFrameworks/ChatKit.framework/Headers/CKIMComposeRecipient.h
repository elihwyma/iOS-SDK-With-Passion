/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class IMHandle, NSString;

@interface CKIMComposeRecipient : CNComposeRecipient

{
    IMHandle *_handle;
}

@property (nonatomic, readonly) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)identifier;
- (void)setIdentifier:(int)arg1;
- (id)address;
- (id)initWithHandle:(id)arg1;
- (id)displayString;
- (id)uncommentedAddress;
- (id)compositeName;
- (id)commentedAddress;
- (_Bool)isRemovableFromSearchResults;
- (void)releaseIMReferences;
- (id)unlocalizedLabel;
- (id)supportedDragTypes;
- (id)objectForDragType:(id)arg1;

@end
