/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject

{
    CMFitnessMachineInternal *_internal;
}

@property (nonatomic, readonly) CMFitnessMachineInternal *_internal;

+ (_Bool)isAvailable;

- (id)init;
- (void)dealloc;
- (void)feedFitnessMachineData:(id)arg1;

@end
