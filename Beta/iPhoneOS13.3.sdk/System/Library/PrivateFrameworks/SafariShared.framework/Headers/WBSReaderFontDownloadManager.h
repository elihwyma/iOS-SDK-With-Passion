/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject

{
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;

- (id)init;
- (void)downloadFont:(id)arg1;
- (double)downloadProgressForFont:(id)arg1;
- (_Bool)hasOngoingRequestForFont:(id)arg1;

@end
