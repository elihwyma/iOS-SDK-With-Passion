/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class EKParticipant, NSPredicate, NSString, NSURL;

@interface WFParticipant : NSObject

{
    _Bool _currentUser;
    NSURL *_URL;
    NSString *_name;
    long long _status;
    long long _role;
    long long _type;
    NSPredicate *_contactPredicate;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long role;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, getter=isCurrentUser) _Bool currentUser;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (nonatomic, readonly) EKParticipant *EKParticipant;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)initWithEKParticipant:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)initWithURL:(id)arg1 name:(id)arg2 status:(long long)arg3 role:(long long)arg4 type:(long long)arg5 isCurrentUser:(_Bool)arg6 contactPredicate:(id)arg7;

@end
