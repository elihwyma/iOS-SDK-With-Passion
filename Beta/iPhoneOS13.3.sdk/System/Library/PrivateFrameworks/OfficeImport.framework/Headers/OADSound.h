/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia

{
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (_Bool)isLoaded;
- (void)setSizeInBytes:(int)arg1;
- (int)sizeInBytes;
- (id)soundData;
- (void)setSoundData:(id)arg1;

@end
