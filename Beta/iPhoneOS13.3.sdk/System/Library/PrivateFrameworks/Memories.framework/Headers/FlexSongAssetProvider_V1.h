/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FlexSongAssetProvider_V1 : NSObject

{
    NSString *_rootFolderPath;
    NSString *_audioFileExtension;
}

@property (retain, nonatomic) NSString *rootFolderPath;
@property (retain, nonatomic) NSString *audioFileExtension;

- (id)urlToRoot;
- (id)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (id)urlToAudioForSegment:(id)arg1;
- (id)initWithFolderPath:(id)arg1;

@end
