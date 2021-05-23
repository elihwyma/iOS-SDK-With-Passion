/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAAnchor : NSObject

{
    struct CGRect mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    NSArray *mTextWrapPoints;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    _Bool mAllowOverlap;
    long long mZIndex;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) int textWrappingMode;
@property (nonatomic) int textWrappingModeType;
@property (retain, nonatomic) NSArray *textWrapPoints;
@property (nonatomic) double wrapDistanceLeft;
@property (nonatomic) double wrapDistanceRight;
@property (nonatomic) double wrapDistanceTop;
@property (nonatomic) double wrapDistanceBottom;
@property (nonatomic) int horizontalPosition;
@property (nonatomic) int relativeHorizontalPosition;
@property (nonatomic) int verticalPosition;
@property (nonatomic) int relativeVerticalPosition;
@property (nonatomic) _Bool allowOverlap;
@property (nonatomic) long long zIndex;

+ (id)stringForTextWrappingModeType:(int)arg1;

- (id)init;
- (id)description;

@end
