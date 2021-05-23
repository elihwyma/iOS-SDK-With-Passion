/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@protocol PXPerson;

@interface PXPeopleNameSelection : NSObject

{
    unsigned long long _selectionType;
    id <PXPerson> _person;
    CNContact *_contact;
    NSString *_name;
}

@property (nonatomic, readonly) unsigned long long selectionType;
@property (nonatomic, readonly) id <PXPerson> person;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *localizedName;

- (id)initWithName:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithSelectedPerson:(id)arg1;
- (id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(unsigned long long)arg4;
- (void)setLinkedPerson:(id)arg1;

@end
