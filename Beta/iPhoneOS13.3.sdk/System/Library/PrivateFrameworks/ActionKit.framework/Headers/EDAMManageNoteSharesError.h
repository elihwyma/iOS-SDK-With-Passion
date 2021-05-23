/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNotFoundException, EDAMUserException, NSNumber;

@interface EDAMManageNoteSharesError : FATObject

{
    NSNumber *_identityID;
    NSNumber *_userID;
    EDAMUserException *_userException;
    EDAMNotFoundException *_notFoundException;
}

@property (retain, nonatomic) NSNumber *identityID;
@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) EDAMUserException *userException;
@property (retain, nonatomic) EDAMNotFoundException *notFoundException;

+ (id)structName;
+ (id)structFields;

@end
