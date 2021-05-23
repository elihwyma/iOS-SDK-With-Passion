/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBThermalController;

@interface SBDashBoardThermalStatusProvider : NSObject

{
    SBThermalController *_thermalController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long thermalStatus;

- (id)init;
- (id)initWithThermalController:(id)arg1;

@end
