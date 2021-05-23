/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMBusinessNotebook, EDAMNotebookRecipientSettings, EDAMNotebookRestrictions, EDAMPublishing, EDAMUser, NSArray, NSNumber, NSString;

@interface EDAMNotebook : FATObject

{
    NSString *_guid;
    NSString *_name;
    NSNumber *_updateSequenceNum;
    NSNumber *_defaultNotebook;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    EDAMPublishing *_publishing;
    NSNumber *_published;
    NSString *_stack;
    NSArray *_sharedNotebookIds;
    NSArray *_sharedNotebooks;
    EDAMBusinessNotebook *_businessNotebook;
    EDAMUser *_contact;
    EDAMNotebookRestrictions *_restrictions;
    EDAMNotebookRecipientSettings *_recipientSettings;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSNumber *defaultNotebook;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) EDAMPublishing *publishing;
@property (retain, nonatomic) NSNumber *published;
@property (retain, nonatomic) NSString *stack;
@property (retain, nonatomic) NSArray *sharedNotebookIds;
@property (retain, nonatomic) NSArray *sharedNotebooks;
@property (retain, nonatomic) EDAMBusinessNotebook *businessNotebook;
@property (retain, nonatomic) EDAMUser *contact;
@property (retain, nonatomic) EDAMNotebookRestrictions *restrictions;
@property (retain, nonatomic) EDAMNotebookRecipientSettings *recipientSettings;

+ (id)structName;
+ (id)structFields;

@end
