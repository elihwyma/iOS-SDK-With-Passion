/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject

{
    NSNumber *_reminderNotifyEmail;
    NSNumber *_reminderNotifyInApp;
    NSNumber *_inMyList;
    NSString *_stack;
}

@property (retain, nonatomic) NSNumber *reminderNotifyEmail;
@property (retain, nonatomic) NSNumber *reminderNotifyInApp;
@property (retain, nonatomic) NSNumber *inMyList;
@property (retain, nonatomic) NSString *stack;

+ (id)structName;
+ (id)structFields;

@end
