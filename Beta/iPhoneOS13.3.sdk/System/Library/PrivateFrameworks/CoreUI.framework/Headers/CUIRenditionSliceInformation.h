/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@interface CUIRenditionSliceInformation : NSObject <Swift>

{
    long long _renditionType;
    double _boundaries[4];
    struct CGRect _destinationRect;
    CDStruct_3c058996 _edgeInsets;
}

@property (nonatomic, readonly) long long renditionType;
@property (nonatomic, readonly) struct CGRect destinationRect;
@property (nonatomic, readonly) CDStruct_3c058996 edgeInsets;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)positionOfSliceBoundary:(unsigned long long)arg1;
- (id)initWithSliceInformation:(id)arg1 destinationRect:(struct CGRect)arg2;
- (struct CGSize)_topLeftCapSize;
- (struct CGSize)_bottomRightCapSize;
- (id)initWithRenditionType:(long long)arg1 destinationRect:(struct CGRect)arg2 topLeftInset:(struct CGSize)arg3 bottomRightInset:(struct CGSize)arg4;

@end
