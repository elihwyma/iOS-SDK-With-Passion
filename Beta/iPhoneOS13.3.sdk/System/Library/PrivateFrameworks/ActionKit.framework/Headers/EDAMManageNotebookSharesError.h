/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNotFoundException, EDAMUserException, EDAMUserIdentity;

@interface EDAMManageNotebookSharesError : FATObject

{
    EDAMUserIdentity *_userIdentity;
    EDAMUserException *_userException;
    EDAMNotFoundException *_notFoundException;
}

@property (retain, nonatomic) EDAMUserIdentity *userIdentity;
@property (retain, nonatomic) EDAMUserException *userException;
@property (retain, nonatomic) EDAMNotFoundException *notFoundException;

+ (id)structName;
+ (id)structFields;

@end
