/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAHLShowActivity : SADomainCommand

@property (copy, nonatomic) NSString *activityDataType;
@property (copy, nonatomic) NSString *activityView;

+ (id)showActivity;
+ (id)showActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
