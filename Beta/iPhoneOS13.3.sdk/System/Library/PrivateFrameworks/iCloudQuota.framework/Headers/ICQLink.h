/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ICQLink : NSObject

{
    NSString *_text;
    long long _options;
    long long _action;
    NSDictionary *_parameters;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) long long action;
@property (copy, nonatomic, readonly) NSDictionary *parameters;

+ (id)linkWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
+ (_Bool)performAction:(long long)arg1 parameters:(id)arg2 options:(long long)arg3;
+ (id)linkWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;

- (id)init;
- (id)debugDescription;
- (_Bool)performAction;
- (id)initWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
- (id)initWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (_Bool)performActionWithOptions:(long long)arg1;

@end
