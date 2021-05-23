/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface EDAMNoteLockStatus : FATObject

{
    NSNumber *_noteUpdateSequenceNumber;
    NSNumber *_lockHolderUserId;
    NSNumber *_lockRenewBy;
    NSArray *_viewingUserIds;
    NSNumber *_viewIdleExpiration;
    NSDictionary *_unknownUsers;
    NSNumber *_currentTime;
}

@property (retain, nonatomic) NSNumber *noteUpdateSequenceNumber;
@property (retain, nonatomic) NSNumber *lockHolderUserId;
@property (retain, nonatomic) NSNumber *lockRenewBy;
@property (retain, nonatomic) NSArray *viewingUserIds;
@property (retain, nonatomic) NSNumber *viewIdleExpiration;
@property (retain, nonatomic) NSDictionary *unknownUsers;
@property (retain, nonatomic) NSNumber *currentTime;

+ (id)structName;
+ (id)structFields;

@end
