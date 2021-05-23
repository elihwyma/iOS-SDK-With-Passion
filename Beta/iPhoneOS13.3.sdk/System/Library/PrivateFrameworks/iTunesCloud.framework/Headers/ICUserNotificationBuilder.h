/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <Swift>

{
    NSMutableDictionary *_userNotificationDictionary;
    long long _alertLevel;
    double _timeoutInterval;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *otherButtonTitle;
@property (nonatomic) _Bool allowInCar;
@property (nonatomic) _Bool displaysActionButtonOnLockScreen;
@property (nonatomic) _Bool displaysAsTopMost;
@property (nonatomic) _Bool forcesModalAppearance;
@property (nonatomic) long long alertLevel;
@property (nonatomic) double timeoutInterval;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setBoolValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (id)initWithStoreDialog:(id)arg1;
- (struct __CFUserNotification *)createCFUserNotification;

@end
