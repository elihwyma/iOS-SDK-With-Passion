/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject

{
    NSString *_displayName;
    NSString *_preferredAddress;
    NSString *_principalPath;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *preferredAddress;
@property (retain, nonatomic) NSString *principalPath;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
