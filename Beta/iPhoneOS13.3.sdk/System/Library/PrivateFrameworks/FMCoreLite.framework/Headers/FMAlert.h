/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface FMAlert : NSObject

{
    _Bool _showMsgInLockScreen;
    _Bool _dismissMsgOnUnlock;
    _Bool _dismissMsgOnLock;
    NSUUID *_alertId;
    unsigned long long _category;
    NSString *_msgTitle;
    NSString *_msgText;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    double _timeout;
    NSDictionary *_additionalSettings;
    CDUnknownBlockType _defaultButtonAction;
    CDUnknownBlockType _alternateButtonAction;
}

@property (retain, nonatomic) NSUUID *alertId;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgText;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) double timeout;
@property (nonatomic) _Bool showMsgInLockScreen;
@property (nonatomic) _Bool dismissMsgOnUnlock;
@property (nonatomic) _Bool dismissMsgOnLock;
@property (retain, nonatomic) NSDictionary *additionalSettings;
@property (copy, nonatomic) CDUnknownBlockType defaultButtonAction;
@property (copy, nonatomic) CDUnknownBlockType alternateButtonAction;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
