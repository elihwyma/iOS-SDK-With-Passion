/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNote, NSArray, NSString;

@interface EDAMNoteEmailParameters : FATObject

{
    NSString *_guid;
    EDAMNote *_note;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSString *_subject;
    NSString *_message;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) NSArray *toAddresses;
@property (retain, nonatomic) NSArray *ccAddresses;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *message;

+ (id)structName;
+ (id)structFields;

@end
