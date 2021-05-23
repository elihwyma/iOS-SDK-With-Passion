/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAccountLimits : FATObject

{
    NSNumber *_userMailLimitDaily;
    NSNumber *_noteSizeMax;
    NSNumber *_resourceSizeMax;
    NSNumber *_userLinkedNotebookMax;
    NSNumber *_uploadLimit;
    NSNumber *_userNoteCountMax;
    NSNumber *_userNotebookCountMax;
    NSNumber *_userTagCountMax;
    NSNumber *_noteTagCountMax;
    NSNumber *_userSavedSearchesMax;
    NSNumber *_noteResourceCountMax;
    NSNumber *_userDeviceLimit;
    NSNumber *_userAdvertisedDeviceLimit;
}

@property (retain, nonatomic) NSNumber *userMailLimitDaily;
@property (retain, nonatomic) NSNumber *noteSizeMax;
@property (retain, nonatomic) NSNumber *resourceSizeMax;
@property (retain, nonatomic) NSNumber *userLinkedNotebookMax;
@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *userNoteCountMax;
@property (retain, nonatomic) NSNumber *userNotebookCountMax;
@property (retain, nonatomic) NSNumber *userTagCountMax;
@property (retain, nonatomic) NSNumber *noteTagCountMax;
@property (retain, nonatomic) NSNumber *userSavedSearchesMax;
@property (retain, nonatomic) NSNumber *noteResourceCountMax;
@property (retain, nonatomic) NSNumber *userDeviceLimit;
@property (retain, nonatomic) NSNumber *userAdvertisedDeviceLimit;

+ (id)structName;
+ (id)structFields;

@end
