/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OADTableBackground, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface OADTableStyle : NSObject

{
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}

- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (id)firstRowStyle;
- (id)wholeTableStyle;
- (id)band1HorzStyle;
- (id)lastRowStyle;
- (void)setWholeTableStyle:(id)arg1;
- (void)setBand1HorzStyle:(id)arg1;
- (void)setBand2HorzStyle:(id)arg1;
- (void)setBand1VertStyle:(id)arg1;
- (void)setBand2VertStyle:(id)arg1;
- (void)setFirstRowStyle:(id)arg1;
- (void)setLastRowStyle:(id)arg1;
- (void)setFirstColumnStyle:(id)arg1;
- (void)setLastColumnStyle:(id)arg1;
- (void)setNorthEastStyle:(id)arg1;
- (void)setNorthWestStyle:(id)arg1;
- (void)setSouthEastStyle:(id)arg1;
- (void)setSouthWestStyle:(id)arg1;
- (id)band2HorzStyle;
- (id)band1VertStyle;
- (id)band2VertStyle;
- (id)firstColumnStyle;
- (id)lastColumnStyle;
- (id)northWestStyle;
- (id)northEastStyle;
- (id)southWestStyle;
- (id)southEastStyle;
- (id)partStyle:(int)arg1;
- (void)setStyle:(id)arg1 forPart:(int)arg2;

@end
