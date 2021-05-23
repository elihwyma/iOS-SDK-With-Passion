/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VEKExportPreset : NSObject

{
    NSString *_avPreset;
    double _aspect;
}

@property (retain, nonatomic) NSString *avPreset;
@property (nonatomic) double aspect;

+ (id)presetWithAVPreset:(id)arg1;

@end
