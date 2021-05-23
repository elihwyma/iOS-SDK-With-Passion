/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <SafariFoundation/Swift-Protocol.h>

@class NSDate, NSString;

@protocol SFSafariPasswordCredential <Swift>

@property (copy, nonatomic, readonly) NSString *user;
@property (copy, nonatomic, readonly) NSString *site;
@property (copy, nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, getter=isExternal) _Bool external;

@end
