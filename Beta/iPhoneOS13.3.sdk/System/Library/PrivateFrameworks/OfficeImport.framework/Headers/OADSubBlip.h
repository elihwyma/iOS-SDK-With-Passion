/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip : OCDDelayedMedia

{
    int mType;
    NSData *mData;
    struct CGSize mSizeInPoints;
    int mSizeInBytes;
    struct CGRect mFrame;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)arg1;
- (id)data;
- (_Bool)isLoaded;
- (void)setData:(id)arg1;
- (struct CGRect)frame;
- (void)setSizeInBytes:(int)arg1;
- (int)sizeInBytes;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (struct CGSize)sizeInPoints;
- (void)setSizeInPoints:(struct CGSize)arg1;

@end
