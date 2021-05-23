/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber, NSString;

@interface EDAMNotebookShareTemplate : FATObject

{
    NSString *_notebookGuid;
    NSNumber *_recipientThreadId;
    NSArray *_recipientContacts;
    NSNumber *_privilege;
}

@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSNumber *recipientThreadId;
@property (retain, nonatomic) NSArray *recipientContacts;
@property (retain, nonatomic) NSNumber *privilege;

+ (id)structName;
+ (id)structFields;

@end
