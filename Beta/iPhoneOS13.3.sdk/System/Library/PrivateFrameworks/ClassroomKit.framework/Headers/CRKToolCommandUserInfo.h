/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CRKToolCommandUserInfo : NSObject

{
    NSString *_sessionIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sessionIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

- (id)initWithSessionIdentifier:(id)arg1;
- (id)appVersion;

@end
