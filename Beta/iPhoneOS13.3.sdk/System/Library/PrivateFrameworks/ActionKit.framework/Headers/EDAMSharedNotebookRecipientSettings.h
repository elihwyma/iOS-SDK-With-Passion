/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMSharedNotebookRecipientSettings : FATObject

{
    NSNumber *_reminderNotifyEmail;
    NSNumber *_reminderNotifyInApp;
}

@property (retain, nonatomic) NSNumber *reminderNotifyEmail;
@property (retain, nonatomic) NSNumber *reminderNotifyInApp;

+ (id)structName;
+ (id)structFields;

@end
