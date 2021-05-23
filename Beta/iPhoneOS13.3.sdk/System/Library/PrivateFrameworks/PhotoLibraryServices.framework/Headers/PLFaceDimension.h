/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@interface PLFaceDimension : NSObject <Swift>

{
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
}

- (id)description;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (_Bool)photosFaceRepresentationHasSmile;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5;

@end
