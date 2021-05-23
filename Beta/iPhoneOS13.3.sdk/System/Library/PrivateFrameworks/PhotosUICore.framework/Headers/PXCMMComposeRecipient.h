/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CNContact, NSDictionary, NSString, PXRecipient;

@protocol PXCMMPersonSuggestion;

@interface PXCMMComposeRecipient : NSObject <Swift>

{
    PXRecipient *_recipient;
    id <PXCMMPersonSuggestion> _personSuggestion;
}

@property (nonatomic, readonly) PXRecipient *recipient;
@property (nonatomic, readonly) id <PXCMMPersonSuggestion> personSuggestion;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecipient:(id)arg1;
- (id)initWithPersonSuggestion:(id)arg1;

@end
