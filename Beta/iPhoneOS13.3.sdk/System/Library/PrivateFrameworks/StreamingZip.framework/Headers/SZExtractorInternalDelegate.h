/*
 Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

#import <Foundation/NSObject.h>

@protocol SZExtractorDelegate;

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject

{
    id <SZExtractorDelegate> delegate;
}

@property (weak) id <SZExtractorDelegate> delegate;

- (void)setExtractionProgress:(double)arg1;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)extractionEnteredPassThroughMode;

@end
