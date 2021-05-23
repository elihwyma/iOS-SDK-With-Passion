/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@protocol PXPerson;

@interface PXPeopleMeDataSource : NSObject

{
    _Bool _requestedSuggestedPerson;
    _Bool _requestedMeContact;
    id <PXPerson> _suggestedPerson;
    CNContact *_meContact;
}

@property (retain, nonatomic) id <PXPerson> suggestedPerson;
@property (retain, nonatomic) CNContact *meContact;
@property (nonatomic, getter=hasRequestedSuggestedPerson) _Bool requestedSuggestedPerson;
@property (nonatomic, getter=hasRequestedMeContact) _Bool requestedMeContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)suggestedPersonForMeViewController:(id)arg1;
- (void)userDidAnswerMeViewController:(id)arg1 withResponse:(_Bool)arg2 suggestedPerson:(id)arg3;
- (void)hasSuggestedPersonForMeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
- (id)_suggestedPersonForMe;
- (void)_persistSuggestedPersonAsMe;
- (id)_fetchPersonWithUri:(id)arg1;

@end
