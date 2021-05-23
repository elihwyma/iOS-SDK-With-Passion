/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol HFContactControllerDelegate;

@interface HFContactController : NSObject

{
    id <HFContactControllerDelegate> _delegate;
    NSMutableDictionary *_recipientAvailabilities;
    unsigned long long _familyMembersState;
    NSArray *_familyMembers;
    NSDictionary *_familyMemberDsidToContact;
    NSArray *_descriptors;
    NSMutableArray *_familyMemberCallbacks;
}

@property (retain, nonatomic) NSMutableDictionary *recipientAvailabilities;
@property (nonatomic) unsigned long long familyMembersState;
@property (copy, nonatomic) NSArray *familyMembers;
@property (copy, nonatomic) NSDictionary *familyMemberDsidToContact;
@property (copy, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSMutableArray *familyMemberCallbacks;
@property (weak, nonatomic) id <HFContactControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *pendingDestinations;

+ (id)stringForRecipientStatus:(unsigned long long)arg1;
+ (id)contactForEmailAddress:(id)arg1 keyDescriptors:(id)arg2;
+ (id)contactForPhoneNumber:(id)arg1 keyDescriptors:(id)arg2;

- (id)init;
- (id)initWithKeyDescriptors:(id)arg1;
- (void)fetchFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;
- (id)_contactForFamilyMember:(id)arg1;
- (void)_downloadFamilyMemberPhotos;
- (void)entriesUpdated:(id)arg1;
- (void)markDestinationsPending:(id)arg1;
- (unsigned long long)statusForDestination:(id)arg1;
- (id)contactForFamilyMemberWithDsid:(id)arg1;

@end
