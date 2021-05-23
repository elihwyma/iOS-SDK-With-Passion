/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSTCellStyle, TSTRichTextPayload, TSUFormatReferenceObject, TSWPParagraphStyle;

@interface TSTCell : NSObject <Swift>

{
    struct {
        unsigned int mUnused:8;
        unsigned int mValueType:8;
        unsigned int mCellFlags:16;
        union {
            double mDouble;
            struct {
                unsigned int mID;
                NSString *mString;
            } mString;
            NSDate *mDate;
        } mValue;
        unsigned int mCellStyleID;
        TSTCellStyle *mCellStyle;
        unsigned int mTextStyleID;
        TSWPParagraphStyle *mTextStyle;
        unsigned int mRichTextPayloadID;
        TSTRichTextPayload *mRichTextPayload;
        unsigned int mCommentStorageID;
        TSDCommentStorage *mCommentStorage;
        struct {
            unsigned int mExplicitFormatFlags:16;
            unsigned int mCurrentCellFormatID;
            CDStruct_95e644ef mCurrentCellFormat;
            unsigned int mNumberFormatID;
            TSUFormatReferenceObject *mNumberFormatRef;
            unsigned int mCurrencyFormatID;
            TSUFormatReferenceObject *mCurrencyFormatRef;
            unsigned int mDurationFormatID;
            TSUFormatReferenceObject *mDurationFormatRef;
            unsigned int mDateFormatID;
            TSUFormatReferenceObject *mDateFormatRef;
            unsigned int mControlFormatID;
            TSUFormatReferenceObject *mControlFormatRef;
            unsigned int mCustomFormatID;
            TSUFormatReferenceObject *mCustomFormatRef;
            unsigned int mBaseFormatID;
            TSUFormatReferenceObject *mBaseFormatRef;
            unsigned int mMultipleChoiceListFormatID;
            TSUFormatReferenceObject *mMultipleChoiceListFormatRef;
        } mCellFormats;
        unsigned char mStrokePresetNumber;
    } mPrivate;
}

+ (id)cell;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCell:(id)arg1;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(_Bool)arg3;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2;
- (id)initWithStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2;
- (_Bool)isCellContentsEqualToCell:(id)arg1;
- (void)writeToStorageRef:(struct TSTCellStorage *)arg1;

@end
