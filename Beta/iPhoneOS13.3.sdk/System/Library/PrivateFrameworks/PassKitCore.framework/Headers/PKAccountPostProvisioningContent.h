/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKAccountPostProvisioningContent : NSObject

{
    unsigned long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_body;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subTitle;
@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *primaryButtonTitle;
@property (copy, nonatomic, readonly) NSString *secondaryButtonTitle;

- (id)initWithDictionary:(id)arg1;

@end
