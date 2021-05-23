/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <NSObject.h>

@class NSString, REMObjectID;

@interface REMDAAccountInfo : NSObject

{
    NSString *_accountID;
    REMObjectID *_rem_accountObjectID;
    NSString *_accountDescription;
}

@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) REMObjectID *rem_accountObjectID;
@property (retain, nonatomic) NSString *accountDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loggingDescription;
- (id)initWithAccountID:(id)arg1 remAccountObjectID:(id)arg2 accountDescription:(id)arg3;

@end
