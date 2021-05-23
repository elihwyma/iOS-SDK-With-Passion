/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount

{
    NSString *_token;
    NSString *_email;
}

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *email;

+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)accountWithToken:(id)arg1;

- (_Bool)isValid;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
