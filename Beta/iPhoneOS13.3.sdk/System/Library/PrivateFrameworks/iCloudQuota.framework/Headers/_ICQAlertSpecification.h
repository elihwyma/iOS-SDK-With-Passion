/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface _ICQAlertSpecification : NSObject

{
    NSDictionary *_serverDict;
    _Bool _disableLockScreenAlert;
    NSString *_title;
    NSString *_message;
    NSString *_altMessage;
    NSString *_lockScreenTitle;
    NSString *_lockScreenMessage;
    NSString *_altLockScreenMessage;
    long long _defaultButtonIndex;
    NSMutableDictionary *_linkForButtonIndex;
}

@property (retain) NSMutableDictionary *linkForButtonIndex;
@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSString *lockScreenTitle;
@property (retain, nonatomic) NSString *lockScreenMessage;
@property (retain, nonatomic) NSString *altLockScreenMessage;
@property (nonatomic) _Bool disableLockScreenAlert;
@property (nonatomic) long long defaultButtonIndex;

- (id)init;
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2;
- (void)setLink:(id)arg1 forButtonIndex:(long long)arg2 defaultButton:(_Bool)arg3;
- (void)_setLinks:(id)arg1 defaultIndex:(unsigned long long)arg2;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForButtonIndex:(long long)arg1;

@end
