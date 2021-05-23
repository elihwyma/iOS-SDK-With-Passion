/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CalDAVPrincipalResult : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
    NSString *_resultType;
    NSString *_principalPath;
    NSArray *_emailAddresses;
    NSMutableArray *_mCUAddresses;
    NSMutableArray *_mEmailAddresses;
}

@property (retain, nonatomic) NSMutableArray *mCUAddresses;
@property (retain, nonatomic) NSMutableArray *mEmailAddresses;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *resultType;
@property (retain, nonatomic) NSString *principalPath;
@property (nonatomic, readonly) NSString *emailAddress;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic, readonly) NSArray *cuAddresses;
@property (nonatomic, readonly) NSString *preferredCUAddress;

+ (id)resultFromResponse:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithResponse:(id)arg1;
- (id)convertToDAContactSearchResultElement;
- (void)addEmail:(id)arg1;
- (void)addCUAddress:(id)arg1;

@end
