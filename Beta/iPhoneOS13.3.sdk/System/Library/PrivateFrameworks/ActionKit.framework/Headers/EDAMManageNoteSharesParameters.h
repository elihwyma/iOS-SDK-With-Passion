/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSString;

@interface EDAMManageNoteSharesParameters : FATObject

{
    NSString *_noteGuid;
    NSArray *_membershipsToUpdate;
    NSArray *_invitationsToUpdate;
    NSArray *_membershipsToUnshare;
    NSArray *_invitationsToUnshare;
}

@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) NSArray *membershipsToUpdate;
@property (retain, nonatomic) NSArray *invitationsToUpdate;
@property (retain, nonatomic) NSArray *membershipsToUnshare;
@property (retain, nonatomic) NSArray *invitationsToUnshare;

+ (id)structName;
+ (id)structFields;

@end
