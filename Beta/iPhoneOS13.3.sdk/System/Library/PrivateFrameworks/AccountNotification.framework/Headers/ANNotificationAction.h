/*
 Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ANNotificationAction : NSObject

{
    _Bool _isInternalURL;
    NSURL *_url;
    NSDictionary *_options;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) _Bool isInternalURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)actionForLaunchingApp:(id)arg1;
+ (id)actionForLaunchingApp:(id)arg1 withOptions:(id)arg2;
+ (id)actionForOpeningWebURL:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithManagedObject:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)perform;

@end
