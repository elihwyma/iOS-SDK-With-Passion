/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CARSessionStatus;

@protocol CPSessionConfigurationDelegate;

@interface CPSessionConfiguration : NSObject

{
    unsigned long long _limitedUserInterfaces;
    unsigned long long _contentStyle;
    id <CPSessionConfigurationDelegate> _delegate;
    CARSessionStatus *_currentStatus;
}

@property (nonatomic) unsigned long long limitedUserInterfaces;
@property (retain, nonatomic) CARSessionStatus *currentStatus;
@property (nonatomic) unsigned long long contentStyle;
@property (weak, nonatomic) id <CPSessionConfigurationDelegate> delegate;

+ (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_limitedUIDidChange:(id)arg1;
- (void)_updateLimitedUIStatus;
- (void)_updateNightMode;
- (void)_nightModeDidChange:(id)arg1;

@end
