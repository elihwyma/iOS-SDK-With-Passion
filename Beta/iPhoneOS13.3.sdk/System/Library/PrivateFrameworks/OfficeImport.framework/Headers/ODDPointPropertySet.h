/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject

{
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    _Bool mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (id)description;
- (id)layoutTypeId;
- (void)setPresentationName:(id)arg1;
- (id)presentationName;
- (id)presentationStyleLabel;
- (int)presentationStyleIndex;
- (double)customScaleX;
- (double)customScaleY;
- (double)customOffsetX;
- (double)customOffsetY;
- (void)setLayoutTypeId:(id)arg1;
- (void)setPresentationStyleLabel:(id)arg1;
- (void)setPresentationStyleIndex:(int)arg1;
- (int)presentationStyleCount;
- (void)setPresentationStyleCount:(int)arg1;
- (id)presentationAssociatedId;
- (void)setPresentationAssociatedId:(id)arg1;
- (_Bool)customVerticalFlip;
- (void)setCustomVerticalFlip:(_Bool)arg1;
- (void)setCustomScaleX:(double)arg1;
- (void)setCustomScaleY:(double)arg1;
- (void)setCustomOffsetX:(double)arg1;
- (void)setCustomOffsetY:(double)arg1;

@end
