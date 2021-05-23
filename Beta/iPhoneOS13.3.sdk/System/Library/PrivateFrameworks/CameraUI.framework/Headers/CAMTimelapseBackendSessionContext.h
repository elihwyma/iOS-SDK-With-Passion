/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMTimelapseState, NSArray, NSString;

@interface CAMTimelapseBackendSessionContext : NSObject

{
    NSString *_timelapseUUID;
    CAMTimelapseState *_state;
    NSArray *_filesToDelete;
    NSArray *_filesToWrite;
}

@property (nonatomic, readonly) NSString *timelapseUUID;
@property (retain, nonatomic) CAMTimelapseState *state;
@property (retain, nonatomic) NSArray *filesToDelete;
@property (retain, nonatomic) NSArray *filesToWrite;

- (id)init;
- (id)description;
- (id)initWithTimelapseUUID:(id)arg1;

@end
