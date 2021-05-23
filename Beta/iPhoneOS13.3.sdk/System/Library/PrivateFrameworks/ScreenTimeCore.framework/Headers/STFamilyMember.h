/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface STFamilyMember : NSObject

{
    _Bool _isMe;
    _Bool _isParent;
    _Bool _isOrganizer;
    NSNumber *_DSID;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_memberType;
    NSString *_firstName;
    NSString *_lastName;
}

@property (nonatomic) _Bool isMe;
@property (nonatomic) _Bool isParent;
@property (nonatomic) _Bool isOrganizer;
@property (copy, nonatomic, readonly) NSNumber *DSID;
@property (copy, nonatomic, readonly) NSString *altDSID;
@property (copy, nonatomic, readonly) NSString *appleID;
@property (copy, nonatomic, readonly) NSString *memberType;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;

- (id)description;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 memberType:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 isMe:(_Bool)arg7 isParent:(_Bool)arg8 isOrganizer:(_Bool)arg9;

@end
