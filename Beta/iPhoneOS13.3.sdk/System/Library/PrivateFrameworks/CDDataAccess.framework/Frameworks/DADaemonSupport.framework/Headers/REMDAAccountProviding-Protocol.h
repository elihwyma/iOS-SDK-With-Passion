/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/Swift-Protocol.h>

@class MISSING_TYPE, NSString, REMObjectID;

@protocol REMDAAccountProviding <Swift>

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) REMObjectID *rem_accountObjectID;
@property (nonatomic, readonly) NSString *accountDescription;

- (MISSING_TYPE *)loggingDescription;

@end
