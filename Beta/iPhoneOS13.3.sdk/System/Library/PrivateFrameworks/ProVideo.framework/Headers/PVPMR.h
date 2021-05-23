/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface PVPMR : NSObject

{
    _Bool gPVPMR_ENABLED;
    NSMutableString *_buffer;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setLevel:(int)arg1;
- (void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2;
- (int)getLevel;
- (id)reportPMR:(double)arg1 pmrKey:(id)arg2 pmrComment:(id)arg3;
- (void)writePMRInfoToBuffer:(id)arg1;
- (void)writeBufferToPermanentStorage;

@end
