/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults : IKJSObject

{
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
}

@property (weak, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage;

- (void)removeData:(id)arg1;
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;
- (id)getData:(id)arg1;
- (void)setData:(id)arg1:(id)arg2;

@end
