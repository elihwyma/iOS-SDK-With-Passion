/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STRestrictionItem : NSObject

{
    NSString *_rmConfiguration;
    NSString *_payloadKey;
    NSString *_uiLabel;
    unsigned long long _restrictionType;
    id _otherInfo;
}

@property (copy, nonatomic, readonly) NSString *rmConfiguration;
@property (copy, nonatomic, readonly) NSString *payloadKey;
@property (copy, nonatomic, readonly) NSString *uiLabel;
@property (nonatomic, readonly) unsigned long long restrictionType;
@property (copy, nonatomic, readonly) id otherInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5;

@end
