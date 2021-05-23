/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADMovie : OCDDelayedMedia

{
    NSData *mData;
    NSString *mName;
    float mStart;
    float mEnd;
    _Bool mIsAudioOnly;
    _Bool loop;
}

@property (retain) NSData *data;
@property (retain) NSString *name;
@property _Bool isAudioOnly;
@property _Bool loop;
@property float movieStartPoint;
@property float movieEndPoint;

- (id)description;

@end
