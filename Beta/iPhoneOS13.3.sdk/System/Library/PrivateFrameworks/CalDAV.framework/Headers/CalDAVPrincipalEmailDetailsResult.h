/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject

{
    NSURL *_principalURL;
    NSString *_displayName;
    NSSet *_preferredAddresses;
}

@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSSet *preferredAddresses;

+ (id)resultFromResponseItem:(id)arg1;

- (id)description;
- (id)addresses;

@end
