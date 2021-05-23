/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *targetViewId;

+ (id)addContentToView;
+ (id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
