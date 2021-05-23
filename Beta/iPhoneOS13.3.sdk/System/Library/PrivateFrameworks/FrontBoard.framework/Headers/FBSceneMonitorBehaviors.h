/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@interface FBSceneMonitorBehaviors : NSObject

{
    _Bool _monitorsSettings;
    _Bool _monitorsPairingStatus;
    _Bool _monitorsClientSettings;
}

@property (nonatomic) _Bool monitorsClientSettings;
@property (nonatomic) _Bool monitorsSettings;
@property (nonatomic) _Bool monitorsPairingStatus;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
