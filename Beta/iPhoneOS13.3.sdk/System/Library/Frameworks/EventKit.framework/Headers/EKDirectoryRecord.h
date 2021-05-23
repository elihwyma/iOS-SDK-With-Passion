/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface EKDirectoryRecord : NSObject

{
    NSString *_displayName;
    NSString *_preferredAddress;
    NSString *_principalPath;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (readonly) NSDictionary *userInfo;

- (id)description;

@end
