/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OADFill;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper

{
    OADFill *mFill;
    struct CGRect mBounds;
}

- (_Bool)isCropped;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGRect)uncroppedBox;
- (id)mainSubBlip;
- (id)mapImageFill:(id)arg1 withState:(id)arg2;
- (id)convertMetafileToPdf:(id)arg1 state:(id)arg2;
- (id)initWithOadFill:(id)arg1 bounds:(struct CGRect)arg2 parent:(id)arg3;
- (void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;
- (void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3;

@end
