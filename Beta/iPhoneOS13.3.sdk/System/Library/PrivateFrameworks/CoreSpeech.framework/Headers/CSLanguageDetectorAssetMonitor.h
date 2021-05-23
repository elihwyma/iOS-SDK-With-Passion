/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;

@interface CSLanguageDetectorAssetMonitor : NSObject

{
    int _notifyToken;
    id <CSLanguageDetectorAssetMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id <CSLanguageDetectorAssetMonitorDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)_supportedLocale:(CDUnknownBlockType)arg1;
- (void)startMonitor;
- (void)supportedLocale:(CDUnknownBlockType)arg1;

@end
