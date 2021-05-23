/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <Foundation/NSObject.h>

@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject

{
    NSMutableDictionary *_info;
    CRCameraReader *_cameraReader;
}

@property (retain, nonatomic) NSMutableDictionary *info;
@property (weak, nonatomic) CRCameraReader *cameraReader;

- (id)init;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
